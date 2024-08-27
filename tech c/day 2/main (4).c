#include<stdio.h>
#define MAX 100

int function(int n)
{
   //Write your code here
   int i,a[MAX];
   a[0]=0,a[1]=0;
   for(i=3;i<=n;i++)
   {
       if(i%2==1)
       {
           a[i]=a[i-2]+7;
       }
       else
       {
           a[i]=a[i-2]+6;
       }
   }
   return a[n];
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}


