#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                int sum = 0;
                if(i + 1 < n) {
                    sum = arr[i+1][j];
                }
                if(i - 1 >= 0) {
                    sum += arr[i-1][j];
                }
                if(j + 1 < n) {
                    sum += arr[i][j+1];
                }
                if(j - 1 >= 0) {
                    sum += arr[i][j-1];
                }
                if(arr[i][j] != sum) {
                     printf("NO");
                    exit(0);
                }
            }
        }
    }
    printf("YES");
   
   return 0;
}
