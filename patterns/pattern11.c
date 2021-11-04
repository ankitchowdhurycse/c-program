/* This program will print the following pattern:
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows + 1; col++)
        {
            if (col <= row)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}