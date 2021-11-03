/* This program will print the following pattern:
    *
   **
  ***
 ****
*****
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
        {
            if (col <= (rows-row))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}