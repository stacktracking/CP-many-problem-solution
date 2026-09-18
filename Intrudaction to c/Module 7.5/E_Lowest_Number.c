#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int com=arr[0];
    int index=1;
   
    for(int i=1;i<n;i++)
    {
        if(arr[i]<com)
        {
            com=arr[i];
            index=i+1;
        }
        
    }
    printf("%d %d",com,index);
    return 0;
}