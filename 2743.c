#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char s[100];
	int i;
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++);
	printf("%d", i);
	return 0;
}