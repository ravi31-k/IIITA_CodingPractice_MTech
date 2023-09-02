#include <stdio.h>

#define ROWS 4
#define COLS 3

void adds(int *x, int *y, int *z)
{
	int i;
	int j;
	int *xij;
	int *yij;
	int *zij;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			xij = x + ((COLS * i) + j);
			yij = y + ((COLS * i) + j);
			zij = z + ((COLS * i) + j);
			*zij = *xij + *yij;
		}
	}

	return;
}

int main()
{
	int i;
	int j;
	int m[ROWS][COLS];
	int n[ROWS][COLS];
	int p[ROWS][COLS];

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			m[i][j] = i * i;
			n[i][j] = j * j;
		}
	}

	adds(m[0], n[0], p[0]);

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%4d", m[i][j]);
		}
		printf("    ");
		for (j = 0; j < COLS; j++) {
			printf("%4d", n[i][j]);
		}
		printf("    ");
		for (j = 0; j < COLS; j++) {
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}

