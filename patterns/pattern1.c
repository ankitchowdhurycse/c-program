/* This program prints the following pattern:
*
* *
* * *
* * * *
* * * * *
*/

#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
