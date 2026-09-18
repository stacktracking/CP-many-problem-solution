#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }

        for(int k=0;k<2*i+1;k++)
        {
            if(i%2==0)
            {
                printf("#");

            }else
            {
                printf("-");
            }
        }

        printf("\n");
    }

    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }

        for(int k=0;k<2*i+1;k++)
        {
            if(i%2==0)
            {
                printf("#");

            }else
            {
                printf("-");
            }
        }

        printf("\n");
    }

   
    

    return 0;
}