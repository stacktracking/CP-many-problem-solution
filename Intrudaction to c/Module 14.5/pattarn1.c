#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int star=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        star++;
        printf("\n");
    }
    return 0;
}