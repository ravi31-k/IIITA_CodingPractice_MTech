#include <stdio.h>

//int transpose(int *, int *, int *);

int transpose(int *a, int *m, int *n)
{
        int i;
        int j;

        for (i = 0; i < *m; i++) {
                for (j = 0; j < *n; j++) {
                        printf ("%d", *(a + (i * (*n) + j)));
                }
                printf ("\n");
        }

}

int main()
{
	int n;
	int i;
	int j;
	int m;

	scanf("%d", &m);
	scanf("%d", &n);

	int a[m][n];

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}


	transpose((int *)a, &m, &n);

	return 0;
}
