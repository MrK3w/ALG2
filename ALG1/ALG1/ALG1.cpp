#include <iostream>
#define N 120

void fill(int a[]) {
	for (int i = 0; i < N; i++) {
		a[i] = i + 2;
	}
}
void change(int a[]) {
	for (int i = 0; i < N/2; i++) {
		int pom = 0;
		pom = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = pom;
	}
}
void primenumber(int a[]) {
	int p = 0; 
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (a[j] != i){ if (a[j] % i == 0) a[j] = 0;}
		}
	}
}

void print(int a[]) {
	for (int i = 0; i < N; i++) {
		if(a[i] != 0) printf("%d ", a[i]);
	}
}

int main()
{
	int a[N];
	fill(a);
	//change(a);
	primenumber(a);
	print(a);
	
}

