#include <stdio.h>

long long power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}

int main()
{
    int x, n;
    long long result;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    result = power(x, n);

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}