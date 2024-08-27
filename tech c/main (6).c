#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{
   //Write your code here
   int i;
   float sum=0,avg;
   for(i=0;i<=lim;i++)
   {
       sum=sum+arr[i];
   }
  avg=sum/lim;
  return avg;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}


