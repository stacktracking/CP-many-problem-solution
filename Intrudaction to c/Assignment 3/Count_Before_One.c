#include<stdio.h>
int count_before_one(int arr[],int n)
{
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=1)
        {
            counter++;
        }
        else{
            return counter;
        }
    }

    return counter;
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

    int res=count_before_one(arr,n);

    printf("%d",res);
    return 0;
}