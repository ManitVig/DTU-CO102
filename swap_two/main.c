#include <stdio.h>

int main() {
	// Take input of two nos.
	int a;
	int b;

	printf("Enter first no: ");
	scanf("%d", &a);
	printf("Enter second no: ");
	scanf("%d", &b);

	//Print before swap
	printf("Before swap: a=%d, b=%d\n", a, b);

	int c = a;
	a = b;
	b = c;

	//Print after swap
	printf("After swap: a=%d, b=%d\n", a, b);
	return 0;
}
