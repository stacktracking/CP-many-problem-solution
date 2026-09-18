#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int star=1;

    for(int i=1;i<=n;i++)
    {
      
      for(int k=1;k<=n-i;k++)
      {
        printf(" ");
      }
        for(int j=1; j<=star;j++)
        {
            printf("*");
        }

        printf("\n");

        star+=2;
    }
    return 0;
}