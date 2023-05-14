#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char word[1000] = "", rslt[1000] = "";
	int R[9];
	int t, i, j, k, r = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %s", &R[i], word);
		for (j = 0; word[j] != '\0'; j++) {
			for (k = 1; k <= R[i]; k++) {
				rslt[r++] = word[j];
			}
		}
		rslt[r++] = ' ';
	}
	rslt[r] = '\0';
	for (i = 0; rslt[i] != '\0'; i++) {
		if (rslt[i] == ' ')
			printf("\n");
		else
			printf("%c", rslt[i]);
	}
	return 0;
}
