#include<stdio.h>

int fun(int num)
{
    //Write your code here
    int rem,temp,t=0;
    while(num!=0)
    {
        rem=num%10;
        temp=rem;
        if(temp>t)
        {
           t=temp; 
        }
        num=num/10;
    }
    return t;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}

