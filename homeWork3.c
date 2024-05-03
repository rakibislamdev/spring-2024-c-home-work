#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j, k = 0;

    for (i = 1; i <= rows; ++i, k = 0)
    {
        // Print spaces
        for (j = 1; j <= rows - i; ++j)
        {
            printf(" ");
        }

        // Print stars
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
