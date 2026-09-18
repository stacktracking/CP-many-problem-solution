#include<stdio.h>
#include<string.h>
int main()
{

    char s[100001];
    scanf("%s",s);
    //printf("%s",s);
    int len=strlen(s);
       int cout=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
              cout++;
        }
    }

       printf("%d",cout);
    return 0;
}