#include <stdio.h>

//�ּҰ�a�� ���Ͽ� ���� ��b�� �� ������ �ּҰ����� ����
#define minFinder(a,b) a<b?a:b

int main() {

	int bk=0;
	int wh=0;
	int min = 50;	//�ּҰ� ������ ����
	int n, m; //ü������ ����,���� ����
	char chs[50][50];

	//1.ü���� ����, ���� �Է�
	scanf("%d %d", &n, &m);
	//2.���� ü������ ���� �Է�
	for (int i = 0; i < n; i++) {
		scanf("%s", &chs[i]);
	}

	//3.i�� ���� ����,j�� ���� ������ Ž��
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			bk = 0;
			wh = 0;
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					if ((a + b) % 2 == 0) {
						if (chs[a][b] == 'B')
							wh++;
						else
							bk++;
					}
					else {
						if (chs[a][b] == 'B')
							bk++;
						else
							wh++;
					}
				}
			}
			
			min = minFinder(min, bk);
			min = minFinder(min, wh);
		}
	}

	//4.�ٽ� ĥ�ؾ� �ϴ� ���簢�� ������ �ּڰ� ���
	printf("%d\n", min);

	return 0;
}