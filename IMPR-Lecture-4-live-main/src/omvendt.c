#include <stdio.h>
/*

Expected output
0
1      *
2     **
3    ***
4   ****
5  *****
6 ******
7*******

 */

int main(void)
{
    int i;
    int j;
    for(i = 0; i < 8; ++i)
    {
        printf("%d", i);
        for(j = 0; j < 7-i; ++j)
        {
            printf(" ");
        }
        for(j = 0; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}