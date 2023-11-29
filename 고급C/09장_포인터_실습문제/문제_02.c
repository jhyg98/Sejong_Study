#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	char ch[20];
	char *p = ch;

	int cnt = 0;
	for (p = ch; p < ch + 20; p++) {
		scanf("%c", p);
		if (*p == '#') {
			break;
		}
		cnt++;
	}

	for (p = ch + cnt - 1; p >= ch; p--) {
		printf("%c", *p);
	}

	return 0;
}
