#include <stdio.h>
#include <math.h>

int main() {

	int t = 0;
	int n=0;
	int num = 665;

	scanf("%d", &n);	//n번째 영화

	while (1) {
		if (t == num)
			break;

		num++;

		for (int i = 0; i < 10; i++) {
			if (num / (int)pow(10, i) % 1000 == 666) {
				t++;
				break;
			}
		}
	}
	printf("%d", num);

	return 0;
}