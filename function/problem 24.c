#include <stdio.h>

int gcd(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    while (1)
    {
        printf("Enter two positive integers: ");
        scanf("%d %d", &a, &b);
        if (a > 0 && b > 0)
        {

            printf("GCD: %d\n", gcd(a, b));
            printf("LCM: %d\n", lcm(a, b));
        }
        else
        {
            printf("Invalid input. Program terminated.\n");
            break;
        }
    }

    return 0;
}
