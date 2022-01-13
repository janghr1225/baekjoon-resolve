#include <stdio.h>
#include <string.h>

int main() {

	char num[16];	//최대 길이가 15이므로
	int rst=0;	//총 시간
	int len=0;	//문자열 길이

	scanf("%s", num);

	len = strlen(num);		//문자열 길이 측정


	//문자열 길이만큼 for문으로 문자열 탐색-> 시간 더하기
	for (int i = 0; i < len; i++) {	
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
			rst += 3;		//숫자2에 있는 알파벳을 쓰려면 3초가 걸림
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
			rst += 4;		//숫자3에 있는 알파벳을 쓰려면 4초가 걸림
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
			rst += 5;
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
			rst += 6;
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
			rst += 7;
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
			rst += 8;
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
			rst += 9;
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
			rst += 10;
		else
			printf("error");

	}

	printf("%d", rst);	//총 걸린 시간의 합

	return 0;

}