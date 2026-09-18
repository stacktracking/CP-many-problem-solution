#include<stdio.h>
int main()
{

    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("IS DIGIT");
    }else if (ch>=65 && ch<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }else{
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;
}