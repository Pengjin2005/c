#include<stdio.h>

int main() {
	int n;
	int a[1005];
	int i;
	int j=0;
	int b[1005];
	scanf("%d", &n);
	for (i = 0;i <=2*n-1 ;i++) {
		b[i] = 0;
	}
	for (i = 0;i < 2 * n - 1;i++) {
		scanf("%d", &j);
		a[i] = j;
		b[j]++;
	}
	for (i = 0;i < n * 10;i++) {
		if (b[i] == 1) { 
			printf("%d", i);
			break;
		}
	}
}