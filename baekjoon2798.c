#include <stdio.h>

int main() {

	int n, m;		//ī�� ����, �ִ밪	
	int cd[100];	//ī�� ��ȣ
	int sum = 0;	//ī��3���� ��
	int max = 0;	//��������� �ִ밪

	//1.ī�尳��, �ִ밪 �Է�
	scanf("%d %d", &n, &m);
	//2.ī�尳����ŭ �� ī�尪 �Է�
	for (int i = 0; i < n; i++) {
		scanf("%d ", &cd[i]);
	}
	//3.i�� ù��°ī��, j�� �ι�°ī��, k�� ����°ī��
	for (int i = 0; i < n; i++) {				//i�� 0���� ����(i=0)
		for (int j = i+1; j < n; j++) {			//j�� 1���� ����(j=i+1)
			for (int k = j+1; k < n; k++) {		//k�� 2���� ����(k=j+1)
				//3-1.ī�� 3�� ���ϱ�
				sum = cd[i] + cd[j] + cd[k];
				//3-2. m���� ���� �����鼭 �������� ���� ������ ū �ִ밪 ã��
				if (sum<=m && sum>max)
					max = sum;
			}
		}
	}
	//4.ī��3�� ���� �ִ밪 ���
	printf("%d ", max);

	return 0;
}