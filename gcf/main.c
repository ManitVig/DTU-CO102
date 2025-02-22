#include <stdio.h>

int gcf(int a, int b) {
	int i = 1;
	int gcf = 1;

	while (i <= a && i <= b) {
		if ((a%i == 0) && (b%i == 0)) {
			gcf = i;
		}
		i++;
	}

	return gcf;
}

int main() {
	int a, b;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	printf("The GCF of %d and %d is: %d", a, b, gcf(a, b));
	return 0;
}
