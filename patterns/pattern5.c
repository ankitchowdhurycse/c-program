/* This program will print the following pattern:
*
* *
* * *
* * * *
* * *
* *
*
*/

#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int upper = rows;
    int lower = rows - 1;
    
    for (int row = 1; row <= upper; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = lower; row >= 1; row--)
    {
        for (int column = row; column >= 1; column--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
