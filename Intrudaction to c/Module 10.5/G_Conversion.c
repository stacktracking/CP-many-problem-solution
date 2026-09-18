#include <stdio.h>
#include<string.h>
int main()
{
   char n[100000];
   scanf("%s",n);
  
   
   int sz=strlen(n);
   
   
   
   for(int i=0;i<sz;i++)
   {
   if(n[i]==',')
   {
     n[i]=' ';
   }
   
   
   
    else if(n[i]>='a' && n[i]<='z')
   {
     n[i]=n[i]-32;
     
   }else if(n[i]>='A' && n[i]<='Z')
   {
     n[i]=n[i]+32;
   }
   
   }
   
   printf("%s",n);
   
   return 0;
}