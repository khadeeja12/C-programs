#include<stdio.h>
#define MAX 100

int function(int year)
{
   //Write your code here
   int i,a[MAX];
   a[1]=1,a[2]=1;
   for(i=3;i<=year;i++)
   {
       if(i%2==1)
       {
           a[i]=a[i-2]*2;
       }
       else
       {
            a[i]=a[i-2]*3;
       }
   }
   return a[year];
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}


