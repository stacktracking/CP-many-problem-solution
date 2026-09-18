#include<stdio.h>
#include<string.h>
int main()
{

    char a[101],b[101];
    scanf("%s %s",&a,&b);

    int len=strlen(a);
    int len_1=strlen(b);
    for(int i=0;i<=len_1;i++) // build file
    // strcat(a,b);
    {
        a[i+len]=b[i];
    }
    printf("%s %s",a,b);
    return 0;
}