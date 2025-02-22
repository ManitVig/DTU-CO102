#include <stdio.h>

int main() {
	int n;
	printf("How many elements in array: ");
	scanf("%d", &n);

	int arr[n];

	for (int i=0; i<n; i++) {
		printf("enter value at pos %d: ", i);
		scanf("%d", &arr[i]);
	}
	int max = 0;
	for (int i = 0; i <= n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("The largest value in array is: %d", max);
}
