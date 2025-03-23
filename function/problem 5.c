
#include <stdio.h>

void compareNumbers(int a, int b)
{

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a == b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    else
    {
        printf("%d is less than %d\n", a, b);
    }
}


int main()
{

    int x, y;
    printf("Please enter two numbers: ");

    scanf("%d %d", &x, &y);

    compareNumbers(x, y);

    return 0;
}
