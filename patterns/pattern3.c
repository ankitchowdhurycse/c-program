/* This program will print the following pattern:
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
            printf("* ");
        printf("\n");
    }
}
