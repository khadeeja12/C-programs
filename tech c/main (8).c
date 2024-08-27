#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   //Write your code here
   int i,f=0,l=0;
   for(i=0;i<lim;i++)
   {
       if(arr[i]==0)
          f++;
       else
          l++;
   }
    if(f>l)
           return -1;
        else if(f<l)
           return 1;
        else
           return 0;
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


