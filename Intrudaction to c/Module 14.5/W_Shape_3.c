#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int star = 1;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) {
            printf("*");
        }
        printf("\n");
        star += 2;
    }
    

    
    star -= 2;  
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) {
            printf("*");
        }
        printf("\n");
        star -= 2;
    }

    return 0;
}
