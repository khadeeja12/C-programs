#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   //Write your code here
   int i,j,count=0;
   for(i=0;i<lim;i++)
   {
       for(j=i+1;j<lim;j++)
       {
           if(arr[i]==arr[j] && arr[i]!=-1)
           {
               count++;
               arr[j]=-1;
              
           }
       }
   }
   return count;
   
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}


