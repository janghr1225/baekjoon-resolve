#include <stdio.h>

int main() {

	int x, y, w, h;
	int a,b,c;

	scanf("%d %d %d %d", &x, &y, &w, &h);	//���� ��ǥ(x,y), ������ ������(w,h)

	if ((w - x) < x) {
		a = w - x;
	}
	else
		a = x;

	if ((h - y) < y) {
		b = h-y;
	}
	else
		b = y;

	if (a < b) {
		c = a;
		printf("%d ", c);
	}
	else {
		c = b;
		printf("%d ", c);
	}

	return 0;

}