#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
    int i,max=0,num,rem,sum,maxIndex;
    for(i=0;i<lim;i++){
        num=arr[i];
        sum=0;
        while(num>0){
            rem = num%10;
            num =num/10;
            sum =sum +rem;
        }
        if(sum>max){
            {
                max=sum;
                maxIndex =i;
            }
        }
    }
    return arr[maxIndex];
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


