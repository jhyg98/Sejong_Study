#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int x, y, z;
	int *px = &x, *py = &y, *pz = &z, *tmp;

	scanf("%d%d%d", px, py, pz);

	tmp = py;

	py = px;
	px = pz;
	pz = tmp;


	printf("%d %d %d\n", *px, *py, *pz);

	return 0;
}
