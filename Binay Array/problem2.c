/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d",&arr[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                int sum = 0;
                if (i - 1 >= 0) {
                    sum += arr[i - 1][j];
                }
                if (i + 1 < n) {
                    sum += arr[i + 1][j];
                }
                if (j + 1 < n) {
                    sum += arr[i][j + 1];
                }
                if (j - 1 >= 0) {
                    sum += arr[i][j - 1];
                }
                if (i - 1 >= 0 && j - 1 >= 0) {
                    sum += arr[i - 1][j - 1];
                }
                if (i + 1 < n && j + 1 < n) {
                    sum += arr[i + 1][j + 1];
                }
                if (i + 1 < n && j - 1 >= 0) {
                    sum += arr[i + 1][j - 1];
                }
                if (i - 1 >= 0 && j + 1 < n) {
                    sum += arr[i - 1][j + 1];
                }
                printf("%d : %d\n",arr[i][j],sum);
                if (sum > max) {
                    max = sum;
                    index = i;
                }
            }
        }
    }
    printf("index : %d",index);

    return 0;
}
