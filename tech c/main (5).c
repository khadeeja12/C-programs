#include<stdio.h>
#include<math.h>
#define MAX 100


int function(int num)
{
   //Write your code here
   int rem,sum=0;
   int temp=num,temp1=num,n=0;
   while(temp>0)
   {
       temp=temp/10;
       n++;
   }
   
   while(num>0)
   {
       rem=num%10;
       sum=sum+pow(rem,n);
       num=num/10;
   }
   if(sum==temp1)
      return 1;
   else
      return 0;
    
   
}


int main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}


