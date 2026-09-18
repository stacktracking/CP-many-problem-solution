#include<stdio.h>
#include<string.h>
int main()
{

    char a[101],b[101];
    scanf("%s %s",a,b);

    int cmp =strcmp(a,b);

    if(cmp == -1)
    {
        printf("%s",a);

    }else if (cmp == 1)
    {
        printf("%s",b);
    }else if(cmp == 0)
    {
        printf("%s",a);
    }
        
    
    return 0;
}