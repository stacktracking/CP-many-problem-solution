#include<stdio.h>

void T_sort(int a,int b,int c)
{
    int temp;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
     if (a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }

    printf("%d\n%d\n%d\n\n",a,b,c);
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
   
    T_sort(a,b,c);

    printf("%d\n%d\n%d",a,b,c);

    
    return 0;
}