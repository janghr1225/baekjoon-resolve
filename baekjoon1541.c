#include <stdio.h>

int main() {

	int a=0, b=0;
	int i = 0;
	char c;


	for (scanf("%d", &b); scanf("%c", &c), c != 10;) {

		//-�� �� i =1�� �ٲ�
		if (c == '-') i = 1;

		scanf("%d", &a);

		//i=1�϶�, -��ȣ�� ó�� ������ �� n���� ��� ��
		if (i) b -= a;

		//i=0�϶�, -�� ���� ���ų� ó�� �Է¹����� n�� �Է¹��� �� ����
		else b += a;
	}

	printf("%d", b);

	return 0;

}