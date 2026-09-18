#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int line=n+5-(n/2);

    int star=1;

    for(int i=0;i<line;i++)
    {
        for(int j=0;j<line-1-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }

        star+=2;
        printf("\n");
    }


      int w=2*line-1;
      int s=(w-n)/2;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}