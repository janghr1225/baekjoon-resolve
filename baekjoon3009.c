#include <stdio.h>

int main() {

	int x[4], y[4];		//입력받을 좌표 3개
	
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);	//좌표값 입력받기
	}

	if (x[0] == x[1]) x[3] = x[2];		
	else if (x[0] == x[2]) x[3] = x[1];	
	else x[3] = x[0];					
	//첫좌표x값이 두번째좌표x값과 같은 경우 출력되어야할 x좌표값은 3번째좌표x값과 같아야 함


	if (y[0] == y[1]) y[3] = y[2];
	else if (y[0] == y[2]) y[3] = y[1];
	else y[3] = y[0];
	//첫좌표y값이 두번째좌표 y값y[1]과 같은 경우 출력되어야할 y좌표값은 3번째좌표 y값y[2]과 같아야 함


	printf("%d %d", x[3], y[3]);

	return 0;

}