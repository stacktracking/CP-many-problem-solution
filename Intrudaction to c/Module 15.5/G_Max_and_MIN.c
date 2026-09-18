#include <stdio.h>

void min_and_max(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
          min = arr[i];
        }else if (arr[i] > max){
          
           max = arr[i];
        }
           
    }
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min_and_max(arr, n);
    return 0;
}
