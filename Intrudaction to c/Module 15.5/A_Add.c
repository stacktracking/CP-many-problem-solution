#include<stdio.h>
int sumFun(int x,int y)
{
    int sum=x+y;

    return sum;
}
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int res=sumFun(a,b);
    printf("%d",res);
    return 0;
}