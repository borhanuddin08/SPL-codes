
#include <stdio.h>
#include <stdbool.h>

bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number))
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}
