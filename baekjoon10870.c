#include <stdio.h>

int fibo(int n);

int main() {

	int n;

	scanf("%d", &n);	//�ݺ��� Ƚ��

	printf("%d", fibo(n+1));	//fibo�Լ� ����ϱ�

	return 0;

}

//�Ǻ���ġ ���� ����Լ�
int fibo(int n) {

	if (n <= 1) return 0;
	else if (n == 2) return 1;

	else
		return fibo(n - 1) + fibo(n - 2);

}