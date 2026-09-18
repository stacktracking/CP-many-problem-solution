#include<stdio.h>
#include<string.h>
int is_palindrome(char str[])
{
    int siz=strlen(str);
    int L=0;
    int R=siz-1;

    while (L<R)
    {
        if(str[L]!=str[R])
        {
            return 0;
        }
        L++;
        R--;
    }
    return 1;
    

}
int main()
{

    char S[1001];
    scanf("%s",S);
    
    int res=is_palindrome(S);

    if(res==1)
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}