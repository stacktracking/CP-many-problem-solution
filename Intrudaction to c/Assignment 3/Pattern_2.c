#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int start=1;
    if(n==1)
    {
        printf("%d",n);
        
    }else{
      for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=i;k>=start;k--)
        {
            printf("%d",k);
            
        }
        
        printf("\n");
    }
    
    }

    return 0;
}