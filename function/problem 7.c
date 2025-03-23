
#include <stdio.h>

int sumOfN(int n)
{
    int arr[n];

    int sum = 0;
    printf("Enter %d numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];
    }
    return sum;
}


int main()
{

    int n = 0;
    int result = 0;

    printf("Enter the number of values: ");

    scanf("%d", &n);

    result = sumOfN(n);

    printf("Sum In Function: %d\n", result);
    printf("Sum In Main: %d\n", result);

    return 0;
}
