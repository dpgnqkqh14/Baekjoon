#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[28] = { 0 };
	int charr[30] = { 0 };
	int i, j, flag = 0;

	for (i = 0; i < 30; i++) {
		charr[i] = i + 1;// 1~30 저장
	}
	for (j = 0; j < 28; j++) {
		scanf("%d", &arr[j]);
	}
	for (i = 0; i < 30; i++) {
		flag = 0;
		for (j = 0; j < 28; j++) {
			if (charr[i] != arr[j]) {//arr를 쭉 돌았는데 같은 숫자가 존재하지 않으면
				flag++;
			}
		}
		if (flag == 28) {//같은 숫자가 없을 때
			printf("%d ", charr[i]);
		}
	}
	return 0;
}