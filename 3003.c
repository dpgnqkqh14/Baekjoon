#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int chess[6] = { 1,1,2,2,2,8 }, answer[6] = {0};
	int i, n;
	for (i = 0; i < 6; i++)
		scanf("%d", &answer[i]);
	for (i = 0; i < 6; i++) {
		n = chess[i] - answer[i];
		printf("%d ", n);
	}
	return 0;
}