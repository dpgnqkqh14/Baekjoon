#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//�Ϲ������� %s �����δ� �Է� ������ ����� �� ���� 
#include <string.h>
int main(void) {
	char word[1000000] = "";
	int i, count = 0;
	scanf("%[^\n]s", word); // [^\n] ����ϸ� ������� ������ �Է����� �ޱ� ����
	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] == ' ') {
			count++;
		}
	}

	if (word[(int)strlen(word) - 1] == ' ')
		count--;
	if (word[0] == ' ')
		count--;

	printf("%d\n", count + 1); 
	return 0;
}
