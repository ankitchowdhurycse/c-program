/* This program will print the following pattern:
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

#include <stdio.h>

int factorial(int n)
{
    int f;

    for (f = 1; n > 1; n--)
        f *= n;

    return f;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf(" %3d", ncr(i, j));

        printf("\n");
    }
    return 0;
}