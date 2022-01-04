#include <stdio.h>

int main() {

	int t;
	int cnta,cntb,cntc;

	scanf("%d", &t);

	if (t % 10 != 0) printf("-1\n");

	else {
		cnta = t / 300;
		t = t % 300;

		cntb = t / 60;
		t = t % 60;

		cntc = t / 10;
		
		printf("%d %d %d", cnta, cntb, cntc);
	}
	
	
	return 0;

}