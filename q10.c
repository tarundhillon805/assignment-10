#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n, sum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    sum = sumOfDigits(n);

    printf("Sum of digits = %d\n", sum);

    return 0;
}