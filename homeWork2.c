#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j, k = 0;

    char ch = 'A';

    for (i = 0; i < rows; i++)
    {
        // Print spaces
        for (j = 0; j < rows - i - 1; j++)
        {
            printf("  ");
        }

        // Print characters
        for (j = 0; j <= i * 2; j++)
        {
            printf("%c ", ch++);
        }

        printf("\n");
    }

    return 0;
}
