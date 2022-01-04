#include <stdio.h>

int main() {

	int pay;
	int one = 1000;
	int left;
	int count = 0;

	scanf("%d", &pay);

	left = one - pay;
	/*
	for (; left >= 500;) {
			left = left - 500;
			count++;
	}
	for (; left >= 100;) {
			left -= 100;
			count++;
	}
	for (; left >= 50;) {
		left -= 50;
		count++;
	}
	for (; left >= 10;) {
		left -= 10;
		count++;
	}
	for(; left >= 5;) {
		left -= 5;
		count++;
	}
	for (; left >= 1;) {
		left -= 1;
		count++;
	}
	*/

	while (left != 0) {
		if (left >= 500) {
			left -= 500;
			count++;
		}
		else if (left >= 100) {
			left -= 100;
			count++;
		}
		else if (left >= 50) {
			left -= 50;
			count++;
		}
		else if (left >= 10) {
			left -= 10;
			count++;
		}
		else if (left >= 5) {
			left -= 5;
			count++;
		}
		else {
			left -= 1;
			count++;
		}
	}

	printf("%d", count);

	return 0;
}