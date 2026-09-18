#include<stdio.h>
int my_abs(int a)
{
    int res=abs(a);

    return res;
}
int main()
{

    int n;
    scanf("%d",&n);
    int ans=my_abs(n);

    printf("%d",ans);
    return 0;
}