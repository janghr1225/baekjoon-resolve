#include <stdio.h>
#include <string.h>

int wordcheck(char word[], int wordlen);

int main() {

	int num;	//�Է��� �ܾ� ����
	char word[101];
	int cnt = 0;	//�׷� �ܾ� ���� ī��Ʈ ��

	scanf("%d", &num);		//�ܾ��� ���� �Է�

	//�ܾ� ������ŭ �ܾ� �Է�
	for (int i = 0; i < num; i++) {
		scanf("%s", word);
		cnt += wordcheck(word, strlen(word));
		//�׷� �ܾ��� ������ 1�� ���Ϲ޾� �ջ��ϱ�
	}

	printf("%d", cnt);	//�׷� �ܾ� ����

	return 0;

}

//�׷� �ܾ����� check
int wordcheck(char word[], int wordlen) {

	int sam = 0;


	for (int i = 0; i < wordlen; i++) {
		for (int j = 0; j < wordlen; j++) {
			//�迭���� ���� �迭���� ���Ͽ� ���� ���� �ִ��� �˻�
			if (word[i] == word[j]) {
				sam = j - i;
				if (sam > 1) {
					//���� sam�� 2�̻��ϰ��
					//���� ���ĺ� ���̿� �ٸ� ���ĺ��� �ִ��� Ȯ��
					if (word[j - 1] != word[j])		//�ٷ� �� ���ĺ��� ������ �ٸ��� Ȯ��
						return 0;		//�ٸ� ���, �׷�ܾ �ƴϹǷ� 0 ��ȯ
				}
			}
		}
	}
	return 1;
}