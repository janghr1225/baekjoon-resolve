#include <stdio.h>

struct people{	//����ü ����
	int weight;		//����ü ���1 ������
	int height;		//����ü ���2 Ű
	int rank;		//����ü ���3 ����
};


int main() {

	int n = 0;	//��� ��

	struct people list[50];	//n�� �ִ� 50�̹Ƿ�

	//1.��� �� �Է�
	scanf("%d", &n);	

	for (int i = 0; i < n; i++) {
		//2-1.��� ����ŭ ������,Ű �Է¹ޱ�
		scanf("%d %d", &list[i].weight, &list[i].height);
		//2-2.�켱 ���Ƿ� ���� �Է�
		list[i].rank = 1;
	}
	//3.i��° ���� �ٸ� ������ ���ʴ�� ��
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//j��°�� Ű�� �����԰� ��� �� ũ�� i��° �Է°����� ������ �����Ƿ�
			//i��°�� ������ �ڷ� �и��� ��(rank +1�� �ϴ� ����)
			if (list[i].height < list[j].height && list[i].weight < list[j].weight)
				list[i].rank += 1;
		}
	}
	//4.���ʴ�� ���� ���
	for (int i = 0; i < n; i++)
		printf("%d ", list[i].rank);

	return 0;

}