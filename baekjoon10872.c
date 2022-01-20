#include <stdio.h>

int fact(int n) {
	if (n > 1)
		return n * fact(n - 1);
	else
		return 1;
}

int main() {

	int n=0;
	
	scanf("%d", &n);

	/*재귀함수 사용하지 않을 때
	 
	int fact = 1;
	
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%d", fact);
	
	*/
	
	printf("%d", fact(n));

	return 0;

}

