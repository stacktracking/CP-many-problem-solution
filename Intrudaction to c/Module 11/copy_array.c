#include<stdio.h>
#include<string.h>
int main()
{

    /* This code snippet is declaring two character arrays `a` and `b` with a size of 101. It then
    reads two strings from the standard input using `scanf` and stores them in arrays `a` and `b`. */
    char a[101];
    char b[101];
     
    scanf("%s %s",&a,&b);

    int leg =strlen(b);


    for(int i=0;i<=leg;i++)
    {
        a[i]=b[i];
    }

    printf("%s %s",a,b);
    return 0;
}