#include <stdio.h>
#include "mylib/mylib.h"
int main()
{
    int n;
    int i;

    printf("Enter a num: ");
    scanf(" %d", &n);

    printf("fibonacci_recursive of %d is: ", n);
    for(;;)

    for (i = 0; i < n; i++)
    {
        printf("%d", fibonacci_recursive(i));
    }
    return 0;
}