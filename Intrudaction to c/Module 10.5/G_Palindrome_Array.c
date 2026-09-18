#include <stdio.h>

int main() {
    
 long long int n;
 scanf("%lld",&n);
 long long int arr[n];
 for(int i=0;i<n;i++)
 {
     scanf("%lld",&arr[i]);
 }
 
 for(int i=0;i<n/2;i++)// 1 2 3 2 1 
 {
      if(arr[i] != arr[n-i-1]) 
      {
           printf("NO");
           return 0;
      }
      
 }
 
 printf("YES");
 
 return 0;
}