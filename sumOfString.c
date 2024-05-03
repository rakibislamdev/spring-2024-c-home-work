#include <stdio.h>

int sumDigits(char *str)
{
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int result = sumDigits(str);
    printf("Sum of digits in the string: %d\n", result);

    return 0;
}
