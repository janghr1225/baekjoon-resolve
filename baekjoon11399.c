#include <stdio.h>

int main() {
	int n, temp, result = 0;
	int arr[1001];
    
	scanf("%d", &n);
    
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
    
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-(i+1); j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
    
	for(int i=0; i<n; i++) {
		for(int j=0; j<i+1; j++) {
			result = result + arr[j];
		}
	}
	
	printf("%d", result);
    
    return 0;
}