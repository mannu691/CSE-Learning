#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a String: ");
    fgets(str, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        char c = str[i];
        if (c == '\0')
            break;
        if (c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        printf("%c", c);
    }
    return 0;
}