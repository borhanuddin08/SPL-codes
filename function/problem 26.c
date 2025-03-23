#include <stdio.h>


void InputMatrix(int matrix[][100], int M, int N)
{
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[][100], int M, int N)
{
    printf("The matrix is:\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[][100], int M, int N, int scalar)
{
    printf("Multiplied by %d :\n", scalar);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matrix[i][j] * scalar);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[100][100];
    int M, N;
    int scalar;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &M, &N);
    InputMatrix(matrix, M, N);

    ShowMatrix(matrix, M, N);

    printf("Enter a scalar value: ");
    scanf("%d", &scalar);

    ScalarMultiply(matrix, M, N, scalar);

    return 0;
}

