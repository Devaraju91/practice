#include <stdio.h>
void fact()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("\n\nEnter an integer to calculate factoril: ");
    scanf("%d",&n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
    //return 0;
}
