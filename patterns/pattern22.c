/*This program will print the following pattern:
1
0  1
1  0  1
0  1  0  1
1  0  1  0  1
*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", (row-col+1)%2);
        }
        printf("\n");
    }
}