#include <stdio.h>

#define ROWS 4
#define COLS 3

void adds(int x[][COLS], int y[][COLS], int z[][COLS])
{
	int i;
	int j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			z[i][j] = x[i][j] + y[i][j];
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

	adds(m, n, p);

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


