#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int cout_S=0,cout_C=0,cout_D=0;
        char str[10001];
        scanf("%s",str);
        int len=strlen(str);

        for(int j=0;j<len;j++)
        {
            if(str[j]>='a' && str[j]<='z')
            {
                cout_S++;
            }else if(str[j]>='A' && str[j]<='Z')
            {
                cout_C++;
            }else 
            {
                    cout_D++;
            }
        }

        printf("%d %d %d\n",cout_C,cout_S,cout_D);
    }
    
    
    return 0;
}