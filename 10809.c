#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char word[100] = "";
	int i, rslt = -1, j;
	char alpha = 'a';
	scanf("%s", word);
	for (j = 0; j < 26; j++) {
		for (i = 0; word[i] != '\0'; i++) {
			if (alpha == word[i]) {
				rslt = i;
				break;
			}
		}
		printf("%d ", rslt);
		alpha = alpha + 1;
		rslt = -1;
	}
	return 0;
}