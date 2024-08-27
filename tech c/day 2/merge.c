#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int i,len1,len2,j=0,k=0;
   char word1[]="abc";
   char word2[]="pqrst";
   char word3[100];
   len1=strlen(word1);
   len2=strlen(word2);
   
   char result[100];
    for(k=0;k<len1+len2;){
    if(word1[i]!='\0'){
        result[k++] =word1[i++];
        // k++;i++;
    }
    if(j<len2){
        result[k++] =word2[j++];
    }
}
result[k]='\0';
printf("%s",result);
   
    return 0;
}