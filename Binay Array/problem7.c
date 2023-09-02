#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    scanf("%s",&str);
    int k = 0;
    int n = strlen(str);
     for(int i=0; i<n; i++) {
        if(str[i] != str[n-i-1]) {
            k = 1;
            break;
        }
     }
    if (k == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
   
   return 0;
}
