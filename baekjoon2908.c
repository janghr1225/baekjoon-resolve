#include <stdio.h>
#include <string.h>

int main() {

	char n1[4];		//ù��° �Է�
	char n2[4];		//�ι�° �Է�
	char temp1, temp2;	//���ڿ��� ������ �� ����� ����

	scanf("%s %s", n1, n2);		// ���ڿ� �ΰ� �Է�

	temp1 = n1[0];
	n1[0] = n1[2];
	n1[2] = temp1;		//ù��° ���ڿ� ������

	temp2 = n2[0];
	n2[0] = n2[2];
	n2[2] = temp2;		//�ι�° ���ڿ� ������	

	//strcmp�� ���ڿ� ���ϱ�
	if (strcmp(n1, n2) > 0)		//strcmp�� 0���� ũ�� n1�� �� ū ��
		printf("%s", n1);		
	else					//strcmp�� 0���� �۰ų� ������(���� ���� ���� ���ٰ� �����Ƿ� ����)
		printf("%s", n2);		//n2�� �� Ŭ ���


	return 0;
}