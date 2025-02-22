#include <stdio.h>

int factorial(int a) {
	if (a == 1) {
		return 1;
	}

	return a * factorial(a-1);
}

int main() {
	printf("Enter number: ");
	int a;
	scanf("%d", &a);

	printf("The factorial of %d is: %d\n", a, factorial(a));
	return 0;
}
