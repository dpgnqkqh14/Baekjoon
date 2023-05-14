#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int whatIsBigNUm(char* A, char* B) {
	int i, flag = -1;
	for (i = 0; A[i] != '\0'; i++) {
		if (A[2 - i] > B[2 - i]) { // 4 3
			flag = 1;//A 가 크다
			break;
		}
		else if (A[2 - i] < B[2 - i]) {
			flag = 0; //B가 크다
			break;
		}
	}
	return flag;
}
int main(void) {
	char A[4], B[4]; //'\0' 이 포함되니까 +1 아닐까...? 맞는듯
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
/*//백준 2908번
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int whatIsBigNUm(char* A, char* B) {
	int i, flag = -1;
	for (i = 0; i < 3; i++) {
		if (A[2 - i] > B[2 - i]) { // 4 3
			flag = 1;//A 가 크다
			break;
		}
		else if (A[2 - i] < B[2 - i]) {
			flag = 0; //B가 크다
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
// 범위를 i < 4 출력을 A [3-i]로 했을 경우 뒤에 NULL이 같이 나오면서 틀림