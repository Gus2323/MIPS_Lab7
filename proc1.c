#include <stdio.h>

int sum(int m, int n)
{
    return m + n;
}

int main()
{
    int m = 10, n = 5;

    int result = sum(m, n);

    printf("%d \n", result);

    return 0;
}
