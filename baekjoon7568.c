#include <stdio.h>

struct people{	//구조체 정의
	int weight;		//구조체 멤버1 몸무게
	int height;		//구조체 멤버2 키
	int rank;		//구조체 멤버3 순위
};


int main() {

	int n = 0;	//사람 수

	struct people list[50];	//n은 최대 50이므로

	//1.사람 수 입력
	scanf("%d", &n);	

	for (int i = 0; i < n; i++) {
		//2-1.사람 수만큼 몸무게,키 입력받기
		scanf("%d %d", &list[i].weight, &list[i].height);
		//2-2.우선 임의로 순위 입력
		list[i].rank = 1;
	}
	//3.i번째 값과 다른 값들을 차례대로 비교
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//j번째의 키와 몸무게가 모두 다 크면 i번째 입력값보다 순위가 높으므로
			//i번째의 순위는 뒤로 밀리게 됨(rank +1을 하는 이유)
			if (list[i].height < list[j].height && list[i].weight < list[j].weight)
				list[i].rank += 1;
		}
	}
	//4.차례대로 순위 출력
	for (int i = 0; i < n; i++)
		printf("%d ", list[i].rank);

	return 0;

}