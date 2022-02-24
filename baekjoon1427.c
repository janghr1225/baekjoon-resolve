#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char temp;
	char n[11];
	//공백이 없는 정수를 자리수마다 비교해야하므로
	// 배열에 정수의 자리수 하나씩 입력받아야 함

	scanf("%s", n);

	//버블정렬로 내림차순 정렬하기
	for (int i = 0; i < strlen(n)-1; i++) {
		for (int j = 0; j < strlen(n); j++) {
			//비교값 중 큰 값 찾아서 자리 변경
			if (n[j] < n[j+1]) {
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}

	}
	//정렬된 문자열 출력
	printf("%s", n);
		
	return 0;
}