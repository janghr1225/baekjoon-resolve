#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char temp;
	char n[11];
	//������ ���� ������ �ڸ������� ���ؾ��ϹǷ�
	// �迭�� ������ �ڸ��� �ϳ��� �Է¹޾ƾ� ��

	scanf("%s", n);

	//�������ķ� �������� �����ϱ�
	for (int i = 0; i < strlen(n)-1; i++) {
		for (int j = 0; j < strlen(n); j++) {
			//�񱳰� �� ū �� ã�Ƽ� �ڸ� ����
			if (n[j] < n[j+1]) {
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}

	}
	//���ĵ� ���ڿ� ���
	printf("%s", n);
		
	return 0;
}