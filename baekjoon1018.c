#include <stdio.h>

//최소값a과 비교하여 현재 값b이 더 작으면 최소값으로 변경
#define minFinder(a,b) a<b?a:b

int main() {

	int bk=0;
	int wh=0;
	int min = 50;	//최소값 저장할 변수
	int n, m; //체스판의 가로,세로 길이
	char chs[50][50];

	//1.체스판 가로, 세로 입력
	scanf("%d %d", &n, &m);
	//2.기존 체스판의 색깔 입력
	for (int i = 0; i < n; i++) {
		scanf("%s", &chs[i]);
	}

	//3.i는 세로 범위,j는 가로 범위를 탐색
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

	//4.다시 칠해야 하는 정사각형 개수의 최솟값 출력
	printf("%d\n", min);

	return 0;
}