#include <stdio.h>
#include <string.h>

int main(void){
    FILE* my_file = fopen("data.txt", "w");
    fprintf(my_file, "Hello file system!\n");
    fclose(my_file);
    return 0;
}