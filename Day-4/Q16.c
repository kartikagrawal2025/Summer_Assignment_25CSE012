#include <stdio.h>

int main()
{
    int start, end, n, original, digit, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (n = start; n <= end; n++)
    {
        original = n;
        sum = 0;

        while (original != 0)
        {
            digit = original % 10;
            sum = sum + (digit * digit * digit);
            original = original / 10;
        }

        if (sum == n)
        {
            printf("%d ", n);
        }
    }

    printf("\n");

    return 0;
}