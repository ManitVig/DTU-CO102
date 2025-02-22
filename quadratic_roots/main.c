#include <stdio.h>
#include <math.h>

int main() {
	// Get quadratic parameters
	int a;
	int b;
	int c;

	printf("Enter the coeffecients for the quadratic ax^2+bx+c\n");

	printf("a: ");
	scanf("%d", &a);
	
	printf("b: ");
	scanf("%d", &b);

	printf("c: ");
	scanf("%d", &c);

	//Calculate discriminant
	
	int d = (b*b) - (4*a*c);

	if (d < 0) {
		printf("the equation has no real solutions");
		return 0;
	}

	//Calculate roots

	float r1 = ((-1 * b) + sqrt(d)) / (2 * a);
	float r2 = ((-1 * b) - sqrt(d)) / (2 * a);

	printf("The roots of the equation are: %f and %f\n", r1, r2);
	return 0;
}
