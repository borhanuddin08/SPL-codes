
#include <stdio.h>

int* multiply_array_elements_by_2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
    return arr;
}

int main()
{
    int n;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* multiplied_array = multiply_array_elements_by_2(arr, n);

    printf("Modified Array is : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", multiplied_array[i]);
    }

    return 0;
}
