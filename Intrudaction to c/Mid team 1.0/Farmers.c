#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);

           int sum=0,mul=0;
           sum=m1+m2;
           mul=d*m1;

           int cal=mul/sum;

           int day=d-cal;

           printf("%d\n",day);
            
        
        
    }
    return 0;
}