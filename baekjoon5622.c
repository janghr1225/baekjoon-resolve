#include <stdio.h>
#include <string.h>

int main() {

	char num[16];	//�ִ� ���̰� 15�̹Ƿ�
	int rst=0;	//�� �ð�
	int len=0;	//���ڿ� ����

	scanf("%s", num);

	len = strlen(num);		//���ڿ� ���� ����


	//���ڿ� ���̸�ŭ for������ ���ڿ� Ž��-> �ð� ���ϱ�
	for (int i = 0; i < len; i++) {	
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
			rst += 3;		//����2�� �ִ� ���ĺ��� ������ 3�ʰ� �ɸ�
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
			rst += 4;		//����3�� �ִ� ���ĺ��� ������ 4�ʰ� �ɸ�
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

	printf("%d", rst);	//�� �ɸ� �ð��� ��

	return 0;

}