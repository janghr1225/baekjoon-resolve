#include <stdio.h>

int fibo(int n);

int main() {

	int n;

	scanf("%d", &n);	//반복할 횟수

	printf("%d", fibo(n+1));	//fibo함수 출력하기

	return 0;

}

//피보나치 수열 재귀함수
int fibo(int n) {

	if (n <= 1) return 0;
	else if (n == 2) return 1;

	else
		return fibo(n - 1) + fibo(n - 2);

}