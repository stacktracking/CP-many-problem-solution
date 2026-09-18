#include<stdio.h>
#include<string.h>
int main()
{
  
  int n;
  scanf("%d",&n);
  
  
  for(int i =0;i<n;i++)
  {
    char a[101];
    scanf("%s",&a);
  
  int sz= strlen(a);

  if(sz<=10)
  {
    printf("%s\n",a);
  }else
  {
    printf("%c%d%c\n",a[0],sz-2,a[sz-1]);
  }

}
  return 0;
}