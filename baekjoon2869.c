#include <stdio.h>

int main() {

	int a, b, v;
	int ab = 0;	//�ö󰡾��� ������ ����
	int count = 0;

	scanf("%d %d %d", &a, &b, &v);

	count = (v - b - 1) / (a - b) + 1;
	
	printf("%d", count);

	return 0;
}