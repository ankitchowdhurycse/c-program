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
    int rows, row, col, k = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (row = rows; row > 0; row--)
    {
        for (col = 1; col <= k; col++)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("*");
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
        k++;
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for (int row = 1; row <= rows; row++)
//     {
//         for (int col = 1; col <= rows+row-1; col++)
//         {
//             if (col < row)
//                 printf(" ");
//             else
//                 printf("*");
//         }
//         printf("\n");
//     }
// }