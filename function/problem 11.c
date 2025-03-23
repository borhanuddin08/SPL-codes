
#include <stdio.h>

int length(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        len++;
    }

    return len;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("%d\n", length(str));

    return 0;
}
