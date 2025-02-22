#include <stdio.h>

int main() {
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		printf("%c is a vowel\n", c);
		return 0;
	}

	printf("%c is a consonant\n", c);
	return 0;
}
