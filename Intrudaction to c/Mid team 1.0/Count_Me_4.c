#include<stdio.h>
#include<string.h>
int main()
{

    char str[100001];
    scanf("%s",str);
    int len=strlen(str);
    int cout[26]={0};

    for(int i=0;i<len;i++)
    {
        cout[str[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(cout[i]>0)
        {
            printf("%c - %d\n",i+'a',cout[i]);
        }
    }
    return 0;
}