#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int n, m, i, j, k, h,temp;
	int arr[100] = { 0 };

	scanf("%d %d", &n, &m); //�ٱ����� ���� / m�� ���� �ִ´�
	for (k = 0; k < n; k++) {//�ٱ��� �ʱ�ȭ
		arr[k] = k + 1;
	}
	for (k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}
	for (h = 0; h < n; h++) {
		printf("%d ", arr[h]);
	}
	return 0;
}