
#include <stdio.h>


void determineNumber(int number)
{
    if (number > 0)
    {
        printf("positive\n");
    }
    else if (number < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    determineNumber(x);

    return 0;
}
