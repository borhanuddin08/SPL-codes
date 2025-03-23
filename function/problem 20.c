
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

int genNthPrime(int N)
{
    int count = 0;
    int num = 2;

    while (count < N)
    {
        if (isPrime(num))
        {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("%dth Prime: %d\n", N, genNthPrime(N));

    return 0;
}
