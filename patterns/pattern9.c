/* This program will print the following pattern:
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>

int main()
{
    int rows, row, col;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (row = 1; row <= rows; row++)
    {
        for (col = 1; col <= 2*rows-row; col++)
        {
            if (col < row)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}