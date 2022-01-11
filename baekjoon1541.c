#include <stdio.h>

int main() {

	int a=0, b=0;
	int i = 0;
	char c;


	for (scanf("%d", &b); scanf("%c", &c), c != 10;) {

		//-일 때 i =1로 바꿈
		if (c == '-') i = 1;

		scanf("%d", &a);

		//i=1일때, -부호가 처음 들어왔을 때 n에서 계속 뺌
		if (i) b -= a;

		//i=0일때, -가 아직 없거나 처음 입력받으면 n에 입력받은 수 더함
		else b += a;
	}

	printf("%d", b);

	return 0;

}