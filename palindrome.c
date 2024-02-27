#include <stdio.h>
int main()
 {
    int num, rev = 0, a, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    a = num;
 
    while(num!=0)
    {
        rem = num%10;
        rev= rev*10 + rem;
        num = num/10;
    }

if (a == rev)
{
    printf("%d is a palindrome number.\n", a); 
}   
else 
{
    printf("%d is not a palindrome number.\n", a);
}
return 0;
}