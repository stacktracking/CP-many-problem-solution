#include<stdio.h>
void odd_even(int arr[],int n)
{
    int ODD=0,EVEN=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 || arr[i]==0)
        {
           EVEN++;
        }
        else
        {
            ODD++;
        }
    }
printf("%d %d",EVEN,ODD);
}
int main()
{

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    odd_even(arr,n);

    return 0;
}