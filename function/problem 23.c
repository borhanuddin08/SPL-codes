
#include <stdio.h>

int str_length(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int find_substr(const char a[], const char b[]) {
    int len_a = str_length(a);
    int len_b = str_length(b);

    for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }
        if (j == len_b) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char a[100], b[100];

    printf("Enter string a: ");
    scanf("%s", a);

    printf("Enter string b: ");
    scanf("%s", b);

    int result = find_substr(a, b);

    if (result == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
