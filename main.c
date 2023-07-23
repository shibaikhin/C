#include <stdio.h>

void sayHallo()
{
    printf("Hello world!\n");
}

int myInt = 12;

char ch = 'A';
char str[] = "String";

int main()
{
    sayHallo();

    printf("Символ %c\n", ch);
    printf("Строка %s\n", str);

    return 0;
}