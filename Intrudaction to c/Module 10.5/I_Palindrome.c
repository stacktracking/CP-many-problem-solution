#include<stdio.h>
#include<string.h>
int main()
{

    char n[10001];
    scanf("%s",n);
        int sz=strlen(n);
       
        int pali=1;
        for(int i=0;i<sz/2;i++)
        {
            if(n[i]!=n[sz-i-1])
            {
               pali=0;
               break;
            }
        }

        if(pali)
        {
            printf("YES");
            
        }else{
            printf("NO");
        }

        

    
    return 0;
}