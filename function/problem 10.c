
#include <stdio.h>

int calculatePower(int base, int exponent)
{
    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int x, y;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &x, &y);

    int power = calculatePower(x, y);

    printf("%d to the power %d is %d\n", x, y, power);

    return 0;
}
