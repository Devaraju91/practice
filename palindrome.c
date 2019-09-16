#include <stdio.h>
void pali()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    printf("\n\n Enter an integer to check palindrome or not: ");
    scanf("%d", &n);
    originalInteger = n;
    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.\n", originalInteger);
    else
        printf("%d is not a palindrome.\n", originalInteger);
    
    //return 0;
}
