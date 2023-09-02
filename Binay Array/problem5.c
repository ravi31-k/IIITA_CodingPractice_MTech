/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf ("%d",&n);
    char arr[n][50];
    char s[50];
    for (int i = 0; i < n; i++) {
        scanf ("%s", arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(s, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], s);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf ("%s\n", arr[i]);
    }
    return 0;
}
