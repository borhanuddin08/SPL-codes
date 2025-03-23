
#include <stdio.h>


void swapNumbers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Value in function: %d  %d\n", a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Value in main: %d  %d\n", num1, num2);
    swapNumbers(num1, num2);

    return 0;
}
