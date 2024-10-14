#include <stdio.h>

int main() {
	int number;
	
	printf("Enter an integer :");
	scanf("%i", &number);
	
	if (number < 0) {
		number = -number;
	}
	
	printf("%i\n", number);
	
	return 0;
}