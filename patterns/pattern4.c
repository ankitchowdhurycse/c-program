/* This program will print the following pattern:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int row = 1; row <= rows; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", column);
        }
        printf("\n");
    }
}
