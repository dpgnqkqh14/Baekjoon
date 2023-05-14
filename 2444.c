#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 2; j <= n - i; j++){
			printf(" ");
		}
		for (j = 0; j <= i * 2; j++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j <= i; j++)
			printf(" ");
		for (j = 0; j < n * 2 - i * 2 - 3; j++)
			printf("*");

		if (i == (n - 2))
			break;
		printf("\n");
	}
	return 0;
}