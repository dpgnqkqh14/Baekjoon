#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int whatIsBigNUm(char* A, char* B) {
	int i, flag = -1;
	for (i = 0; A[i] != '\0'; i++) {
		if (A[2 - i] > B[2 - i]) { // 4 3
			flag = 1;//A �� ũ��
			break;
		}
		else if (A[2 - i] < B[2 - i]) {
			flag = 0; //B�� ũ��
			break;
		}
	}
	return flag;
}
int main(void) {
	char A[4], B[4]; //'\0' �� ���ԵǴϱ� +1 �ƴұ�...? �´µ�
	int rslt, i;
	scanf("%s %s", A, B); // 734 893
	rslt = whatIsBigNUm(A, B);
	if (rslt == 1) {
		for (i = 0; A[i] != '\0'; i++) {
			printf("%c", A[2 - i]);
		}
	}
	else {
		for (i = 0; B[i] != '\0'; i++) {
			printf("%c", B[2 - i]);
		}
	}
	return 0;
}
/*//���� 2908��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int whatIsBigNUm(char* A, char* B) {
	int i, flag = -1;
	for (i = 0; i < 3; i++) {
		if (A[2 - i] > B[2 - i]) { // 4 3
			flag = 1;//A �� ũ��
			break;
		}
		else if (A[2 - i] < B[2 - i]) {
			flag = 0; //B�� ũ��
			break;
		}
		else
			continue;
	}
	return flag;
}
int main(void) {
	char A[4], B[4];
	int rslt, i;
	scanf("%s %s", A, B); // 734 893
	rslt = whatIsBigNUm(A, B);
	if (rslt == 1) {
		for (i = 0; i < 3; i++) {
			printf("%c", A[2 - i]);
		}
	}
	else {
		for (i = 0; i < 3; i++) {
			printf("%c", B[2 - i]);
		}
	}
	return 0;
}*/
// ������ i < 4 ����� A [3-i]�� ���� ��� �ڿ� NULL�� ���� �����鼭 Ʋ��