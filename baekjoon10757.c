#include <stdio.h>
#include <string.h>		//strlen()


//더했을 때 자리수가 올라가면 배열이 하나씩 다 밀리기 때문에 복잡해짐
//문자열을 역순으로 바꿔 밀리지 않고 뒤에 추가되도록 만듦
int reverse(char arr[]) {
	char tmp;
	int len = strlen(arr);

	for (int j = 0; j < len/2; j++) {
		tmp = arr[j];
		arr[j] = arr[len - j - 1];
		arr[len - j - 1] = tmp;
	}
	return 0;
}

int main(){

	//int형의 한계때문에 큰 수 계산이 불가
	//때문에 배열에 입력해 계산
	char a[10005] = { 0 };
	char b[10005] = { 0 };
	char ab[10005] = { 0 };	//합을 넣을 배열

	int len = 0;	//배열 길이
	int sum = 0;	//합
	int plus=0;	//자리 올림

	scanf("%s %s", a, b);

	reverse(a);
	reverse(b);

	//큰 수의 자리수에 맞춰서 계산해야하므로
	//더 큰 수 찾아서 계산할 배열 길이를 정함
	if (strlen(a) > strlen(b))	len = strlen(a);
	else	len = strlen(b);

	for (int i = 0; i < len; i++) {

		//배열이 char형이기때문에 계산을 위해 문자를 숫자로 변환 과정
		//아스키코드 활용
		sum = a[i] - '0' + b[i] - '0' + plus;	

		//만약 두 수의 자리수가 달라 배열에 null이 있으면 sum이 음수가 되므로
		//양수가 될 때까지 다시 '0'을 더해야 함
		while (sum < 0)		sum += '0';

		if (sum > 9)		plus = 1;	//더해서 10이상이면 자리수 +1	
		else				plus = 0;

		ab[i] = sum % 10 + '0';	//다시 숫자 -> 문자로 변환
	}

	if (plus == 1)
		ab[len] = '1';	//자리수 올림이 발생하면 마지막 배열에 1 삽입

	reverse(ab);	//다시 역순해서 원래 입력 값으로 복원시킴
	printf("%s", ab);

	return 0;
}