#include<stdio.h>
int main()
{

    int x=10;
    printf("%d\n",x);
    int* p=&x;
    printf("%p\n",p);

    *p=20;

    printf("%d",*p);
    return 0;
}