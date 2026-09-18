#include<stdio.h>
int main()
{

    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
        int cout2=0,cout3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout2++;
        }else if(arr[i]%3==0)
        {
            cout3++;
        }else if(arr[i]%2==0 && arr[i]%3==0)
        {
            cout2++;
        }
    }

    printf("%d %d",cout2,cout3);
    return 0;
}