#include<stdio.h>
#include<math.h>
int checkPrime(int num)
{
    //Write your code here
    int flag=1,i;
    if(num==1)
        return 0;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}


void main()
{   
    int num;
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}

