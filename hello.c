#include <stdio.h>

int main()
{
    char name[99];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}