/* This program will print the following program:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
            printf("* ");
        printf("\n");
    }
}
