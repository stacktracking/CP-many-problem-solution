#include<stdio.h>
void prn(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i==n)
      {
        continue;
      }
        printf(" ");
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    prn(n);
    return 0;
}