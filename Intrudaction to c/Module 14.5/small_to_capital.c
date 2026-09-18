#include<stdio.h>
void small_TO_capital(char a)
{
    if(a>='a' && a<='z')
    {
        printf("%c",a-32);
    }else if(a>='A' && a<='Z')
    {
        printf("%c",a+32);
    }
}
int main()
{

    char n;
    scanf("%c",&n);
    small_TO_capital(n);
    return 0;
}