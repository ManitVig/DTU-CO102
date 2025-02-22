#include <stdio.h>

int factorial(int num) {
	int factorial = 1;

	for (int i = num; i > 1; i--) {
		factorial *= i;
	}

	return factorial;
}

int main() {
	printf("enter number: ");
	int a;
	scanf("%d", &a);

	printf("the factorial of %d is: %d\n", a, factorial(a));
	return 0;
}
