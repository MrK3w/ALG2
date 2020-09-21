#include <iostream>

void print(int a[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void switch_rows (int a[][3],int prvni, int druhy) {
	int pom = 0;
	for (int j = 0; j < 3; j++) {
		pom = a[prvni][j];
		a[prvni][j] = a[druhy][j];
		a[druhy][j] = pom;
	}
}

void multiple(int a[][3], int prvni, int druhy, int multiple,int multiple1) {
	int pom = 0;
	for (int j = 0; j < 3; j++) {
		a[prvni][j] *= multiple;
		a[druhy][j] *= multiple1;
		a[prvni][j] += a[druhy][j];
	}
}
int main()
{
	int poc = 0;
	int a[3][3] = { { 1,3,-2 }, { -3,1,0 }, { 4,2,8 } };
	int b[3][3] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	print(a);
	multiple(a,1,2,4,3);
	print(a);
	multiple(a, 2, 0, 1, -12);
	print(a);
	multiple(a, 2, 1, 1, 3);
	print(a);

	puts("");
	multiple(b, 1, 2, 4, 3);
	print(b);
	multiple(b, 2, 0, 1, -12);
	print(b);
	multiple(b, 2, 1, 1, 3);
	print(b);
	
	
}

