

#include <stdio.h>

int n;

void transpose(int arr[][n], int *m, int *n)
{
    printf("\n---------------------TRANSPOSE-----------------------\n");
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *m; j++) {
             printf("%4d",arr[i][j]);
        }
        printf("\n");
    }    
}

int main()
{
    int m;
    
    scanf ("%d%d", &m, &n);
    int arr[m][n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(arr, &m, &n);
    printf("\n---------------------ORIGINAL-----------------------\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
