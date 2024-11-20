#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d can be expressed as the sum of %d and %d\n", num, i, num - i);
            return 1;
        }
    }
    printf("%d can't be expressed as sum of two prime numbers\n");

    return 0;
}
