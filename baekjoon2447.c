#include <stdio.h>


void starstemp(int i, int j, int n);

int main() {

	int n,i,j;

	scanf("%d", &n);	//N�� �Է�

	//��,�� n*nũ�� ���簢�� �����
	for (i = 0; i < n; i++) {	//��
		for (j = 0; j < n; j++) {	//��
			starstemp(i, j, n);	//*�� ��� �Լ� ȣ��
		}
		printf("\n");	//���� �� ������ ������(������)�� �Ѿ
	}

	return 0;
}

//��� �Լ��� �� ���
void starstemp(int i, int j, int n) {
	
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		printf(" ");	//���� ���
	}
	else {
		if (n / 3 == 0) {	//n�� 3���� ���� ���(1,2�� ��)
			printf("*");
		}
		else {
			starstemp(i, j, n / 3);	// ���� ��ų� ������ ���� ������ �ݺ�
		}
	}
}