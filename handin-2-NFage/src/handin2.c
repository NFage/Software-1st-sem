#include <stdio.h>

// Programmet ser umiddelbart ud til at fungere og finde den korrekte gcd, men det er lang tid om det.
// Jeg tænker derfor ikke at det er en holdbart løsning, hvis man skulle arbejde med meget store tal.

int main(void)
{
int a, b, i, gcd;
    do {
        printf("Please input the values for a and b\n");
        scanf("%d%d", &a, &b);
    } while (a <= 0 || b <= 0);

    printf("You assigned a = %d and b = %d.\n", a, b);

    for(i = 1; i >= 0; i++)
        if (a % i == 0 && b % i == 0)
        gcd = i;
        printf("The GCD is %d\n", gcd);

return 0;
}
