#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&arr[i]);
    }
       
    int cout[100000]={0};
    
    for(int i=1;i<=a;i++)
    {
        int val = arr[i];
        cout[val]++;
        
    }
       

    for(int i=1;i<=b;i++)
    {
        printf("%d\n",cout[i]);
    }

    
    return 0;
}