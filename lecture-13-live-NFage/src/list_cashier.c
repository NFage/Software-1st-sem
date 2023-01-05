#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

/**
 * A struct containing the name and cost of a shopping item
 */
typedef struct {
    char name[30];
    double cost;
} item_t;

/**
 * A struct for building the linked list, has the "next" item which is NULL if no next exists
 */
typedef struct node_t { // we need a name here ...
    item_t item;
    struct node_t* next; // ... so we can use it again here
} node_t;

/**
 * A fancy wrapper for a linked list to make our types nice, and make our program look nice
 * A valid list has a pointer to the first element of a linked list or NULL
 */
typedef struct {
    node_t* head;
} tree_t;

/**
 * Appends an item to a list of items (first argument). This function prepends the item to the list.
 * @param list, a valid list struct
 * @param name, the name of the item to add
 * @param cost, the cost of the item to add
 */
void add_item(tree_t* list, char* name, double cost)
{
    // we start by allocating space for a new node. The node already contains enough space for the item.
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->next = list->head; // we push the next element down
    new_node->item.cost = cost;
    // we use strcpy here because C does not support direct assignment.
    strcpy(new_node->item.name, name);
    // fix the list.
    list->head = new_node;
}

/**
 * Prints a list of items. Assumes that the list is a propper linked list.
 * @param list, a valid list struct
 */
void print_items(tree_t* list)
{
    node_t* current = list->head;
    while(current != NULL) // we know that the NULL pointer signals the end of the list
    {
        printf("%s %lf\n", current->item.name, current->item.cost);
        current = current->next; // move to the next element
    }
}
/**
 * Total the cost of products in a linked list.
 * @param list,
 */
void total_cost(tree_t* list){
    double sum = 0; //holder for the total cost.
    node_t* current = list->head;
    while(current != NULL){
        sum += current->item.cost; //add the cost of each item to the total sum.
        current = current->next;
    }
    printf("Total cost %lf.\n", sum);
}
/**
 * Deallocates the memory allocated by the list
 * @param list, a list to deallocate
 */
void deallocate_list(tree_t* list)
{
    node_t* current = list->head;
    while(current != NULL) // we know that the NULL pointer signals the end of the list
    {
        //printf("%s %lf\n", current->item.name, current->item.cost);
        node_t* next = current->next; // we need to copy out the value "next" before we deallocate!
        free(current);
        current = next; // move to the next
    }
    // remember to reset the list pointer
    list->head = NULL;
}

int main(void)
{
    tree_t list_of_items = {NULL};
    char name[30];
    double cost;
    while(1)
    {
        printf("Input name and cost (end with 'exit 0')\n");
        scanf("%s %lf", name, &cost);
        // our magic stop-item
        if(strcmp(name, "exit") == 0)
        {
            print_items(&list_of_items);
            total_cost(&list_of_items);
            // !! Remember to clean up before we stop !!
            deallocate_list(&list_of_items);
            exit(EXIT_SUCCESS);
        }
        else {
            add_item(&list_of_items, name, cost);
        }
    }
    deallocate_list(&list_of_items);
    return 0;
}
