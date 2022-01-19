#include <stdio.h>

int main() {

	int a, b, v;
	int ab = 0;	//올라가야할 나머지 길이
	int count = 0;

	scanf("%d %d %d", &a, &b, &v);

	count = (v - b - 1) / (a - b) + 1;
	
	printf("%d", count);

	return 0;
}