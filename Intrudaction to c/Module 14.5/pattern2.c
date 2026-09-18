#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int star=n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n-i;j>=1;j--)
        {
          printf(" ");
        }
        
        for(int k=star+i;k>1;k--)
        {
          printf("*");
        }
        star--;
        printf("\n");
    }
    return 0;
}