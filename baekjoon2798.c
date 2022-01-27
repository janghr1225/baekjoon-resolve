#include <stdio.h>

int main() {

	int n, m;		//카드 갯수, 최대값	
	int cd[100];	//카드 번호
	int sum = 0;	//카드3장의 합
	int max = 0;	//현재까지의 최대값

	//1.카드개수, 최대값 입력
	scanf("%d %d", &n, &m);
	//2.카드개수만큼 각 카드값 입력
	for (int i = 0; i < n; i++) {
		scanf("%d ", &cd[i]);
	}
	//3.i는 첫번째카드, j는 두번째카드, k는 세번째카드
	for (int i = 0; i < n; i++) {				//i는 0부터 시작(i=0)
		for (int j = i+1; j < n; j++) {			//j는 1부터 시작(j=i+1)
			for (int k = j+1; k < n; k++) {		//k는 2부터 시작(k=j+1)
				//3-1.카드 3장 합하기
				sum = cd[i] + cd[j] + cd[k];
				//3-2. m값을 넘지 않으면서 이전까지 더한 값보다 큰 최대값 찾기
				if (sum<=m && sum>max)
					max = sum;
			}
		}
	}
	//4.카드3장 합의 최대값 출력
	printf("%d ", max);

	return 0;
}