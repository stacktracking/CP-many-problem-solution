#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);


    while(n--)
    {
        long long int pro,a,b,c;
        scanf("%lld %lld %lld %lld",&pro,&a,&b,&c);
         
       long long int mul=a*b*c;

        
            if(pro==0)
        {
            printf("0\n");
        
        }
        
        else if(pro%mul != 0)
        {
            
            printf("-1\n");
        }else{
           long long int result= pro/mul;
            printf("%lld\n",result);
        }
    }
     

   
    return 0;
}