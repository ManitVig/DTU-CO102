#include <stdio.h>

int reverseNumber(int a) {
	int reversed = 0;
	
	while(a > 0) {
		int digit = a % 10;
		reversed = reversed * 10 + digit;
		a /= 10;
	}
	return reversed;
}

int isPalindrome(int num) {
	return num == reverseNumber(num);
}

int main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	
	if (isPalindrome(num)) {
		printf("The number is a palindrome\n");
		return 0;
	}
	printf("The number is NOT a palindrome\n");
	return 0;
}

