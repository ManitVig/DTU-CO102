#include <stdio.h>

int lcm(int a , int b) {
	int lcm = a * b;
	for(int i = 1; i < lcm; i++) {
		if (a*i == b*i) {
			lcm = a * i;
			return lcm;
		}
	}
	return lcm;
}

int main() {
	int a, b;

	printf("Enter first no: ");
	scanf("%d", &a);

	printf("Enter second no: ");
	scanf("%d", &b);

	printf("The LCM of %d and %d is: %d\n", a, b, lcm(a, b));
	return 0;
}
