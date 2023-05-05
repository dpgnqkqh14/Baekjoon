#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	double test[1000] = { 0 }, max, sum = 0;
	int i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%lf", &test[i]);
	}
	max = test[0];
	for (i = 1; i < n; i++) {
		if (max < test[i])
			max = test[i];
	}
	for (i = 0; i < n; i++) {
		test[i] = test[i] / max * 100;
		sum += test[i];
	}
	printf("%lf", sum / n);
	return 0;
}