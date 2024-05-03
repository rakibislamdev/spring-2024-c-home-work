#include <stdio.h>

int main()
{
    int i, space, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= i; ++j)
        {
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}
