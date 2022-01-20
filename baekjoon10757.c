#include <stdio.h>
#include <string.h>		//strlen()


//������ �� �ڸ����� �ö󰡸� �迭�� �ϳ��� �� �и��� ������ ��������
//���ڿ��� �������� �ٲ� �и��� �ʰ� �ڿ� �߰��ǵ��� ����
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

	//int���� �Ѱ趧���� ū �� ����� �Ұ�
	//������ �迭�� �Է��� ���
	char a[10005] = { 0 };
	char b[10005] = { 0 };
	char ab[10005] = { 0 };	//���� ���� �迭

	int len = 0;	//�迭 ����
	int sum = 0;	//��
	int plus=0;	//�ڸ� �ø�

	scanf("%s %s", a, b);

	reverse(a);
	reverse(b);

	//ū ���� �ڸ����� ���缭 ����ؾ��ϹǷ�
	//�� ū �� ã�Ƽ� ����� �迭 ���̸� ����
	if (strlen(a) > strlen(b))	len = strlen(a);
	else	len = strlen(b);

	for (int i = 0; i < len; i++) {

		//�迭�� char���̱⶧���� ����� ���� ���ڸ� ���ڷ� ��ȯ ����
		//�ƽ�Ű�ڵ� Ȱ��
		sum = a[i] - '0' + b[i] - '0' + plus;	

		//���� �� ���� �ڸ����� �޶� �迭�� null�� ������ sum�� ������ �ǹǷ�
		//����� �� ������ �ٽ� '0'�� ���ؾ� ��
		while (sum < 0)		sum += '0';

		if (sum > 9)		plus = 1;	//���ؼ� 10�̻��̸� �ڸ��� +1	
		else				plus = 0;

		ab[i] = sum % 10 + '0';	//�ٽ� ���� -> ���ڷ� ��ȯ
	}

	if (plus == 1)
		ab[len] = '1';	//�ڸ��� �ø��� �߻��ϸ� ������ �迭�� 1 ����

	reverse(ab);	//�ٽ� �����ؼ� ���� �Է� ������ ������Ŵ
	printf("%s", ab);

	return 0;
}