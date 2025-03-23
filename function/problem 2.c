
#include<stdio.h>



void print_character(char character)
{
    printf("value received from main :%c\n",character);
}



int main ()
{

    char x;
    printf("enter a character : ");
    scanf("%c",&x);
    print_character(x);
    return 0;
}

