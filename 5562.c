#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char* num[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
	char n[16] = "";
	int i, j, k, sum = 0;
	
	scanf("%s", n);
	for (k = 0; n[k] != '\0'; k++) {
		for (i = 0; i < 8; i++) {
			for (j = 0; num[i][j] != '\0'; j++)
				if (n[k] == num[i][j]) {
					sum += (i + 3);
				}
		}
	}
	printf("%d", sum);
	return 0;
}