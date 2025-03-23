
#include <stdio.h>

int findMinimumValue(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elementsof the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minValue = findMinimumValue(arr, n);

    printf("Minimum Value: %d\n", minValue);

    return 0;
}
