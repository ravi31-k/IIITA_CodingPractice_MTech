

#include <stdio.h>

int main()
{
    int n;
    int sum;
    int num;
    
    printf("Enter the Size of the Matrix\n");
    scanf("%d", &n);
    
    sum = 0;
    int arr[n][n];
    
    printf("Enter the elements of the Matrix\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i == j)
            {
                scanf ("%d", &arr[i][j]);
                sum += arr[i][j];
            }
        }
    }
    num = n*n - n;
    int i;
    for(i=0;i<sum;i++)
    {
        if(num*i > sum)
        {
            break;
        }
    }
    
    printf("%d",i);

    return 0;
}
