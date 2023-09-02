#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        a[i] = sum;
    }
     for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += arr[j][i];
        }
        b[i] = sum;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
           if(a[i] == b[j]) {
               printf("Row : %d and Column : %d",i,j);
               return 0;
           }
        }
    }
   
   
   return 0;
}
