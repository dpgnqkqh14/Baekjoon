#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[10] , mod[10];
	int i, j = 0, check = 0, count = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		mod[j++] = arr[i] % 42;
	}
	for (i = 0; i < 10; i++) {
		check = 1;
		for (j = i+1; j < 10; j++) {
			if (mod[i] == mod[j])
				check = 0;//같은 수 존재
		}
		count += check;
	}
	printf("%d", count);
	return 0;
}