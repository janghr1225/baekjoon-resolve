#include <stdio.h>


void starstemp(int i, int j, int n);

int main() {

	int n,i,j;

	scanf("%d", &n);	//N값 입력

	//행,열 n*n크기 정사각형 만들기
	for (i = 0; i < n; i++) {	//행
		for (j = 0; j < n; j++) {	//열
			starstemp(i, j, n);	//*을 찍는 함수 호출
		}
		printf("\n");	//한줄 다 찍으면 다음줄(다음행)로 넘어감
	}

	return 0;
}

//재귀 함수로 별 찍기
void starstemp(int i, int j, int n) {
	
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		printf(" ");	//공백 찍기
	}
	else {
		if (n / 3 == 0) {	//n이 3보다 작은 경우(1,2일 때)
			printf("*");
		}
		else {
			starstemp(i, j, n / 3);	// 별을 찍거나 공백을 찍을 때까지 반복
		}
	}
}