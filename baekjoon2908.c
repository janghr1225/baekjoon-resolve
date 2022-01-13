#include <stdio.h>
#include <string.h>

int main() {

	char n1[4];		//첫번째 입력
	char n2[4];		//두번째 입력
	char temp1, temp2;	//문자열을 뒤집을 때 사용할 변수

	scanf("%s %s", n1, n2);		// 문자열 두개 입력

	temp1 = n1[0];
	n1[0] = n1[2];
	n1[2] = temp1;		//첫번째 문자열 뒤집기

	temp2 = n2[0];
	n2[0] = n2[2];
	n2[2] = temp2;		//두번째 문자열 뒤집기	

	//strcmp로 문자열 비교하기
	if (strcmp(n1, n2) > 0)		//strcmp가 0보다 크면 n1이 더 큰 값
		printf("%s", n1);		
	else					//strcmp가 0보다 작거나 같으면(값이 같은 경우는 없다고 했으므로 무시)
		printf("%s", n2);		//n2가 더 클 경우


	return 0;
}