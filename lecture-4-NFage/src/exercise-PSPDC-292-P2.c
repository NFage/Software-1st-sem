#include <stdio.h>

int main() {
   int i, j;
   for (i = 0; i <= 5; ++i){
       for (j = 0; j <= i; ++j){
           printf("%d ", j);
       }
   }
    return 0;
}
/* int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i <= rows; ++i) {
       for (j = 0; j <= i; ++j) {
           printf("%d ", j);
       }
       printf("\n");
   } */