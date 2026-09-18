#include<stdio.h>
#include<signal.h>
int main()
{

    int n,rem1=0,rem2=0;
     scanf("%d",&n);
     rem1=n/10;
     rem2=n%10;

     if(rem2!=0)
     {
       
     if(rem1%rem2==0 || rem2%rem1==0)
     {
        printf("YES");
     }else{
        printf("NO");

     }

     }else{
        printf("NO");
     }

    return 0;
}