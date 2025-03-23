
#include <stdio.h>

void printEven(int arr[], int n)
{
    printf("Even numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    printEven(arr, n);

    return 0;
}
