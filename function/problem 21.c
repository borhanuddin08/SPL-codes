#include <stdio.h>
#include <math.h>


double CalcMean(int array[], int num_of_elem)
{
    int sum = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum += array[i];
    }
    return (double)sum / num_of_elem;
}

double CalcStdDeviation(int array[], int num_of_elem)
{
    double mean = CalcMean(array, num_of_elem);
    double sum_squared_diff = 0.0;

    for (int i = 0; i < num_of_elem; i++)
    {
        sum_squared_diff += pow(array[i] - mean, 2);
    }

    return sqrt(sum_squared_diff / num_of_elem);
}

int main()
{
    int num_of_elem;

    printf("Enter the number of elements : ");
    scanf("%d", &num_of_elem);

    int array[num_of_elem];

    printf("Enter elements of the array : ");
    for (int i = 0; i < num_of_elem; i++)
    {
        scanf("%d", &array[i]);
    }

    double std_deviation = CalcStdDeviation(array, num_of_elem);

    printf("Standard Deviation: %.2lf\n", std_deviation);

    return 0;
}
