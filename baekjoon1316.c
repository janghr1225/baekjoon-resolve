#include <stdio.h>
#include <string.h>

int wordcheck(char word[], int wordlen);

int main() {

	int num;	//입력할 단어 개수
	char word[101];
	int cnt = 0;	//그룹 단어 개수 카운트 값

	scanf("%d", &num);		//단어의 개수 입력

	//단어 개수만큼 단어 입력
	for (int i = 0; i < num; i++) {
		scanf("%s", word);
		cnt += wordcheck(word, strlen(word));
		//그룹 단어일 때마다 1을 리턴받아 합산하기
	}

	printf("%d", cnt);	//그룹 단어 리턴

	return 0;

}

//그룹 단어인지 check
int wordcheck(char word[], int wordlen) {

	int sam = 0;


	for (int i = 0; i < wordlen; i++) {
		for (int j = 0; j < wordlen; j++) {
			//배열값과 다음 배열값을 비교하여 같은 값이 있는지 검사
			if (word[i] == word[j]) {
				sam = j - i;
				if (sam > 1) {
					//만약 sam이 2이상일경우
					//같은 알파벳 사이에 다른 알파벳이 있는지 확인
					if (word[j - 1] != word[j])		//바로 전 알파벳이 같은지 다른지 확인
						return 0;		//다른 경우, 그룹단어가 아니므로 0 반환
				}
			}
		}
	}
	return 1;
}