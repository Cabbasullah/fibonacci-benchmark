#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void)
{
    (time(0));

    int n;
    int i;

    float starTime = (float)clock() / CLOCKS_PER_SEC;
    printf("Enter a number: ");
    scanf(" %d", &n);

    printf("\nFibbonacci_recursive of %d: ", n);

    for (unsigned int i = 0; i < n; i++)
    {
        printf("%d", fibonacci_recursive(i));
    }

    float endTime = (float)clock() / CLOCKS_PER_SEC;
    printf("\nExecution Time: %f s/n\n", endTime - starTime);

    return 0;
}
