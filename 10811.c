#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[100] = {0};
	int i, n, x, start, last, j, size, temp;
	scanf("%d %d", &n, &x);//�ٱ��� ��/�ٲ� Ƚ��
	for (i = 0; i < n; i++) {
		arr[i] = i + 1; //�� �ٱ��Ͽ� ��ȣ �� �ο�
	}
	for (i = 1; i <= x; i++) {
		scanf("%d %d", &start, &last); // 1 4
		size = last - start + 1; // 4
		for (j = 0; j < size / 2; j++) {
			temp = arr[start - 1 + j];
			arr[start - 1 + j] = arr[last - 1 - j];
			arr[last - 1 - j] = temp;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}