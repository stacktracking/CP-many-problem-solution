#include<stdio.h>
#include<string.h>
int main()
{

    char a[101],b[101];
    scanf("%s %s",a,b);
    
    int len1=strlen(a),len2=strlen(b);

    printf("%d %d\n",len1,len2);

    char add=strcat(a,b);

    printf("%s\n",a);

    a[len1]='\0';
    

    char tem;

    
    
    tem=a[0];
    a[0]=b[0];
    b[0]=tem;

    printf("%s %s",a,b);
    

    return 0;
}