#include <stdio.h>

int main() {
	int a,b;
	
	printf("Input two integers: ");
	scanf("%i %i", &a, &b);
	
	printf("+ result is %i\n", a+b);
	printf("- result is %i\n", a-b);
	printf("* result is %i\n", a*b);
	printf("/ result is %i\n", a/b);
	printf("%% result is %i\n", a%b);
	
	return 0;
}
