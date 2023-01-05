#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *Merge(int L[], int start, int end, int mid);
int *MergeSort(int L[], int start, int end);
void printList(int L[], int size);

int main(void){
    int L[] = { 5, 3, 8, 1, 6, 10, 7, 2, 4, 9 };
    int L_size = sizeof(L) / sizeof(L[0]);

    printf("Given list \n");
    printList(L, L_size);

    MergeSort(L, 0, L_size - 1);

    printf("The sorted list \n");
    printList(L, L_size);
    return 0;
}

int *Merge(int L[], int start, int end, int mid){
    int n1 = mid - start + 1;
    int n2 = end - mid + 1;

    int L1[] = {n1};
    int L2[] = {n2};

    int i = 0;
    int j = 0;

    while (i < mid - start + 1 && j < end - mid){
        if (L1[i] <= L2[j]){
            L[start + i + j] = L1[i];
            i++;
        } else if (L[start + i + j] == L2[j]){
            j++;
        }
        if (i == mid - start + 1){
            for (int k = j - mid - 1; k < end; ++k) {
                L[start + i + k] = L2[k];
            }
        } else {
            for (int k = i - mid - start; k < mid; ++k) {
                L[start + j + k] = L1[k];
            }
        }
    }
    return L;
}

int *MergeSort(int L[], int start, int end){
    if (start < end){
        int m = (end+1)/2;
        MergeSort(L,start,end);
        MergeSort(L,m +1, end);
        L = Merge(L, start, end, m);
    }
    return L;
}

void printList(int L[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", L[i]);
    printf("\n");
}