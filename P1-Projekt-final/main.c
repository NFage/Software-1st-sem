#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "shopping_list.h"
#include "StoreListGeneration.h"
#include "CalculateCheapestOption.h"
#include "stdlib.h"
#include "string.h"

typedef struct {
    char item[15];
}item_holder;

typedef struct {
    char item_name[15];
    int item_price;
}item;

typedef struct {
    char store_name[11];
    double distance;
    int x;
    int y;
    item items[11];
}stores;

int store_array_name(char* store_name) {

    if (strcmp(store_name, "Bilka") == 0) {
        return 0;
    } else if (strcmp(store_name, "Rema") == 0) {
        return 1;
    } else if (strcmp(store_name, "Fotex") == 0) {
        return 2;
    } else if (strcmp(store_name, "Spar") == 0) {
        return 3;
    } else if (strcmp(store_name, "Daglig_Brusen") == 0) {
        return 4;
    } else if (strcmp(store_name, "Coop_365") == 0) {
        return 5;
    } else if (strcmp(store_name, "Nem_handel") == 0) {
        return 6;
    } else if (strcmp(store_name, "Min_kobmand") == 0) {
        return 7;
    } else if (strcmp(store_name, "Fleggard") == 0) {
        return 8;
    } else if (strcmp(store_name, "Netto") == 0) {
        return 9;
    } else if (strcmp(store_name, "Meny") == 0) {
        return 10;
    } else {
        printf("No store can be found. Name of store: %s\n", store_name);
        return -1;
    }
}

tree_t get_list_of_items();
stores * scan_file_into_stores(FILE * fptr2, size_t size_of_list);
final_stores * setup_finalStores(size_t size_of_list);
item_holder * setup_itemHolder(node_t* current, size_t size_of_list);
final_stores * convert_store_type(stores *stores1, final_stores *finalStores, item_holder *itemHolder, double range, size_t size_of_list);
void print_stores_prices(final_stores *final_stores, size_t size_of_list);
void print_best_stores(best_stores bestStores);
double distance_formula(int x1,int x2, int y1, int y2);
void find_shopping_route(size_t size_of_list_of_stores, FILE *fptr2);
stores * catalog(FILE * fptr2);

int main() {
    size_t size_of_list_of_stores;
    Storelistgeneration(&size_of_list_of_stores);
    FILE *fptr2;
    fptr2 = fopen ("store_list.txt","r");
    char input;
    do {
        rewind(fptr2);
        printf("To make a shopping list type 's'\n");
        printf("To see all the catalogues type 'c'\n");
        printf("To quit the program type 'q'\n");
        scanf(" %c",&input);
        if(input == 's') {
            find_shopping_route(size_of_list_of_stores, fptr2);
        }
        else if(input == 'c') {
            catalog(fptr2);
        }
        printf("\n");
    } while (input != 'q');
    fclose(fptr2);

    return 0;
}

void find_shopping_route(size_t size_of_list_of_stores, FILE *fptr2) {

    //sets up start values and resets the file pointer:
    rewind(fptr2);
    double range = 0;
    int amount_of_stores_to_visit = 0;

    //Get user input:
    printf("Please input the maximum radius of your shopping trip in KM\n");
    scanf("%lf",&range);
    printf("Please input the maximum amount of stores you want to visit\n");
    scanf("%d", &amount_of_stores_to_visit);


    tree_t list_of_items = get_list_of_items();


    stores *stores1 = scan_file_into_stores(fptr2, size_of_list_of_stores);

    final_stores *finalStores = setup_finalStores(size_of_list_of_stores);

    node_t* current = list_of_items.head;
    item_holder *itemHolder = setup_itemHolder(current, size_of_list_of_stores);

    for (int i = 0; i < 11; ++i) {
        stores1[i].distance = distance_formula(0,stores1[i].x,0,stores1[i].y);
    }


    finalStores = convert_store_type(stores1, finalStores, itemHolder, range, size_of_list_of_stores);

    free(itemHolder);
    free(stores1);
    deallocate_list(&list_of_items);

    print_stores_prices(finalStores, size_of_list_of_stores);

    best_stores bestStores = get_list_of_best_stores(finalStores, size_of_list_of_stores, amount_of_stores_to_visit);
    free(finalStores);

    print_best_stores(bestStores);


}


//To print out user desired item name (Shopping list)
tree_t get_list_of_items(){
    tree_t list_of_items = {NULL};
    char name[30];
    char nameholder[30];
    int exit_con=0;
    int i;
    while (exit_con == 0){
        printf("Enter product (end with 'exit')\n");
        scanf("%s",nameholder);
        for(i=0; i<30;++i){
            name[i]=tolower(nameholder[i]);
        }
        if(strcmp(name, "exit") == 0){
            print_items(&list_of_items);
            //deallocate_list(&list_of_items);
            exit_con = 1;
        } else {
            add_item(&list_of_items, name);
        }
    }
    return list_of_items;
}

//Get data form file and set it into store list
stores * scan_file_into_stores(FILE * fptr2, size_t size_of_list) {
    stores *stores1 = calloc(size_of_list, sizeof(stores));
    for (int i = 0; i < size_of_list; ++i) {
        fscanf(fptr2,"%[^ ] cordinates: x:%d y:%d ",stores1[i].store_name,&stores1[i].x,&stores1[i].y);
        for (int j = 0; j < 11; ++j) {
            fscanf(fptr2,"%*d: %[^:]: %d ",stores1[i].items[j].item_name,&stores1[i].items[j].item_price);
        }
    }
    return stores1;
}

//Setups finalStores list for later use.
final_stores * setup_finalStores(size_t size_of_list) {
    final_stores *finalStores = calloc(size_of_list, sizeof(final_stores));

    if (finalStores == NULL) {
        printf("Unable to allocate memory\n");
    }

    for (int i = 0; i < size_of_list; ++i) {
        for (int j = 0; j < 11; ++j) {
            finalStores[i].finalItems[j].price = 0;
            strcpy(finalStores[i].finalItems[j].item_name,"");
        }
    }
    return finalStores;
}

//Gets the users items in a list
item_holder * setup_itemHolder(node_t* current, size_t size_of_list) {
    item_holder *itemHolder = calloc(size_of_list, sizeof(item_holder));;
    int g = 0;
    while(current != NULL){
        strcpy(itemHolder[g].item,current->item.name);
        g++;
        current = current->next;
    }
    return itemHolder;
}

//Converts stores list to finalStores list
final_stores * convert_store_type(stores *stores1, final_stores *finalStores, item_holder *itemHolder, double range, size_t size_of_list) {
    for (int i = 0; i < size_of_list; ++i) {
        if(stores1[i].distance > range) {
            continue;
        }
        for (int j = 0; j < 11; ++j) {
            for (int k = 0; k < 11; ++k) {
                if(strcmp(stores1[i].items[j].item_name,itemHolder[k].item) == 0){
                    finalStores[store_array_name(stores1[i].store_name)].finalItems[j].price = stores1[i].items[j].item_price;

                    strcpy(finalStores[store_array_name(stores1[i].store_name)].finalItems[j].item_name,itemHolder[k].item);
                    strcpy(finalStores[store_array_name(stores1[i].store_name)].store_name,stores1[i].store_name);
                    finalStores[store_array_name(stores1[i].store_name)].distance = stores1[i].distance;
                }
            }
        }
    }
    return finalStores;
}

void print_stores_prices(final_stores *final_stores, size_t size_of_list){

    printf("\n\nList of stores that are within the desired radius:\n\n");
    for (int i = 0; i < size_of_list; ++i) {
        if(strlen(final_stores[i].store_name) == 0){
            continue;
        }
        printf("Store: %s Distance: %lf\n",final_stores[i].store_name,final_stores[i].distance);

        for (int j = 0; j < 11; ++j) {
            if(final_stores[i].finalItems[j].price != 0) {
                printf("Product: %s Price:%d\n", final_stores[i].finalItems[j].item_name,final_stores[i].finalItems[j].price);
            }
        }
        printf("\n");
    }

}

void print_best_stores(best_stores bestStores) {
    int sum;
    printf("\nShopping list:\n\n");

    for (int i = 0; i < bestStores.number_of_stores; ++i) {
        for (int j = 0; j < 11; ++j) {
            if (bestStores.bestStoreForItem[i].bestFinalItems[j].price == 0) { continue;}
            printf("%s\n", bestStores.bestStoreForItem[i].storeName);
            printf("The store is %lf km away from your location\n", bestStores.bestStoreForItem[i].distance);
            break;
        }
        for (int j = 0; j < 11; ++j) {
            if (bestStores.bestStoreForItem[i].bestFinalItems[j].price == 0) { continue;}
            printf("Buy %s for %d\n", bestStores.bestStoreForItem[i].bestFinalItems[j].item_name, bestStores.bestStoreForItem[i].bestFinalItems[j].price);
            sum+=bestStores.bestStoreForItem[i].bestFinalItems[j].price;
        }

        printf("\n");
    }
    printf("The total cost is: %d\n",sum);
}

double distance_formula(int x1,int x2, int y1, int y2){
    return sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
}

stores * catalog(FILE * fptr2) {
    char ch;
    if (fptr2 == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    while((ch = fgetc(fptr2)) != EOF)
        printf("%c", ch);
}