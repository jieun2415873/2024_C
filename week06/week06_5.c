#include <stdio.h>

int main() {
	int num1, num2;
	char op;
	int result;
	
	printf("Enter the calculation :");
	scanf("%d %c %d", &num1, &op, &num2);
	
	switch (op) {
		case '+':
			result = num1+num2;
			break;
		case '-':
			result = num1-num2;
			break;
		case '*':
			result = num1*num2;
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
			} else {
				printf("There is no answer\n");
				return 1;
			}
			break;
		default:
			printf("There is no answer\n");
			return 1;
	}
	
	printf("= %d\n", result);
		
	return 0;
}