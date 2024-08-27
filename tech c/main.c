#include<stdio.h>

int sumofdig(int num)
{
    //Write your code here
    int rem,sum=0;
    while(num!=0)
    {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    }
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}

