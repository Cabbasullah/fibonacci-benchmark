#include<stdio.h>
int fibonacci_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2));
    }
}
int fibonacci_iterative(int n)
{
    int fibonacci_iterative[n];
    fibonacci_iterative[0] = 0;
    fibonacci_iterative[1] = 1;
    int i;

    for (i = 2; i <= n; i++)
    {
        fibonacci_iterative[i] = fibonacci_iterative[i - 1] + fibonacci_iterative[i - 2];
    }
    return fibonacci_iterative[n];
}
