#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome_iter(char *str);

int is_palindrome_rec(char *str, int i, unsigned long long j);

int main(void) {

    is_palindrome_iter("anna");
    is_palindrome_rec("otto",0, 1);

    return 0;
}
/**
 *
 * @param str
 * @return
 */
int is_palindrome_iter(char *str) {
    int i = 0;
    unsigned long long j = 1; // starter på en da C bruger 0 index.
    unsigned long long length = strlen(str);
    char holder1, holder2; //kunne ikke få functionen til at fungere uden de her ekstra variabler.
    do {
        holder1 = str[i]; // variable der holder data i str[i]
        holder2 = str[length - j]; // variable der holder data i str[length -j] (sidste index)
        if (holder1 == holder2) {
            i++; // i forsøges for at gå fra index 1, til 2 . . .
            j++; // j forøges for at length - j går fra index[slut], index[slut-1]. . .
        } else {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    } while (i < strlen(str)); //fordi funktionen skal stoppe på et tidspunkt.
    printf("%s is a palindrome\n", str);
    return 1;
}

int is_palindrome_rec(char *str, int i, unsigned long long j) {
    unsigned long long length = strlen(str);
    char holder1, holder2;
    holder1 = str[i];
    holder2 = str[length - j];
    if (holder1 == holder2 && i < strlen(str)) {
        i++;
        j++;
        is_palindrome_rec(str, i, j); // gentager hvis ovenstående conditions bliver mødt.
        return 1;
    } else if (holder1 != holder2){
        printf("%s is not a palindrome\n", str);
    } else if (i == strlen(str)) {
        printf("%s is a palindrome\n", str); // bliver printed hvis holder1 == holder2 gennem hele string.
    }
    return 0;
}