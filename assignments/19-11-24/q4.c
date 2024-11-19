#include <stdio.h>

int main()
{
    int num, fac = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        return 1;

    while (num > 1)
    {
        fac *= num;
        num--;
    }
    printf("Factorial : %d\n", fac);
    return 0;
}