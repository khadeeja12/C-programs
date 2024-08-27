#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   //Write your code here
   int i,m;
   m=arr[0];
   for(i=1;i<=lim;i++)
   {
       if(m>arr[i])
       {
          m=m;
       }
       else
       {
           m=arr[i];
       }
   }
   return m;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int max=function(A,n);    
    
    printf("%d",max);
    return 0;
}


