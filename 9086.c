#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>  
#include<stdio.h>
/*int main(void) {// 2차원 배열 이용
	char s[10][1000];
	int i, t, len;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%s", &s[i]);
	}
	for (i = 0; i < t; i++) {
		len = (int)strlen(s[i]);
		printf("%c%c\n", s[i][0], s[i][len - 1]);
	}
	return 0;
}*/
int main(void) {//1차원 포인터 이용 / 동적할당이용
	char* s[10] = {""};
	int i, t, len;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		s[i] = (char*)malloc(sizeof(char)*1000);
		scanf("%s", s[i]);
	}
	for (i = 0; i < t; i++) {
		len = (int)strlen(s[i]);
		printf("%c%c\n", s[i][0], s[i][len - 1]);
	}
	for (i = 0; i < t; i++) {
		free(s[i]);
	}
	return 0;
}