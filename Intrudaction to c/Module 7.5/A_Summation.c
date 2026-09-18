#include<stdio.h>
#include<stdlib.h>
int main()
{

    long long n;
    scanf("%lld",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
        
    }
    if(sum<0)
    {
        sum=-sum;
    }
    printf("%lld",sum);
    

    return 0;
}