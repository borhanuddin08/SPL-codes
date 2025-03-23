
#include <stdio.h>

int calculateSum(int n)
{
    int sum = 0;
    int num;

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    return sum;
}

int main()
{
    int n, sum;

    printf("Enter the number of values: ");
    scanf("%d", &n);
    sum = calculateSum(n);

    printf("Sum In Function: %d\n", sum);
    printf("Sum In Main: %d\n", sum);

    return 0;
}
