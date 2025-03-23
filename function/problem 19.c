
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void generatePrime(int N)
{
    printf("Prime less than %d: ", N);
    for (int i = 2; i < N; i++)
    {

        if (isPrime(i))
        {

            printf("%d, ", i);
        }
    }

    printf("\n");
}

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);

    generatePrime(N);

    return 0;
}
