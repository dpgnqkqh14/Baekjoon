#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char n[100] = {""};
	int i, num, sum = 0, temp;
	scanf("%d", &num);
	scanf("%s", &n);
	for (i = 0; i < num; i++) {
		temp = n[i] - '0';
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}