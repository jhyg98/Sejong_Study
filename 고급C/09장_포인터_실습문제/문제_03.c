#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int N;
	int x[50];
	int *p = x;

	scanf("%d", &N);

	int cnt = 0;
	for (p = x; p < x + N; p++) {
		scanf("%d", p);
		if (*p == 0) {
			break;
		}
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}
