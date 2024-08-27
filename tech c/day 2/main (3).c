#include<stdio.h>
#define MAX 100

int function(char * str)
{
    int i, cap = 0, small = 0, digit = 0, special = 0, space = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            cap = 1;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            small = 1;    
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            digit = 1;
        }
        if((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
        {
            special = 1;
        }
        if(str[i] == ' ')
        {
            space = 1;
        }
    }
    if(cap && small && digit && special && !space && i >= 8)
        return 1;
    else
        return 0;
}

int main()
{
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    int out = function(text);
    printf("%d\n", out);
    return 0;
}


