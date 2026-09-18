#include<stdio.h>
#include<math.h>
int main() {
    int test, n;
    scanf("%d", &test);
    
    while(test--) {
        scanf("%d", &n);
        int a[n], b[n];
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];  
        }

      
        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }


        
           int c[n];
        for(int i=0;i<n;i++)
        {
             c[i]= abs(a[i]-b[i]);
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}
