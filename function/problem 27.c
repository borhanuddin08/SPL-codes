
#include <stdio.h>
void Get_Number_And_Base(int *number, int *base) {
    printf("Enter the number to be converted: ");
    scanf("%d", number);

    printf("Enter the base (between 2 and 16): ");
    scanf("%d", base);

    if (*base < 2 || *base > 16) {
        printf("Invalid base value. Base must be between 2 and 16.\n");
        *number = -1;
    }
}

void Convert_Number(int number, int base) {
    if (number == 0) {
        return;
    }
    Convert_Number(number / base, base);

    int remainder = number % base;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int number, base;

    Get_Number_And_Base(&number, &base);

    if (number != -1) {
        printf("Converted number: ");
        Convert_Number(number, base);
        printf("\n");
    }

    return 0;
}
