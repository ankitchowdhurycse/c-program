/*This program will print the following pattern:
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int number = 1;
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%2d ", number);
            number++;
        }
        printf("\n");
    }
}