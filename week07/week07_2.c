#include <stdio.h>

int sumTwo(int a, int b)
{
	return a+b;
}

int square(int n)
{
	return n*n;
}	
	
int get_max(int x, int y)
{
	if (x>y) return x;
	else return y;
}	
	
int main() {
    int num1, num2;
    int sum_result, square_result, max_result;

    printf("Enter the integers : ");
	scanf("%d %d", &num1, &num2);
	
    sum_result = sumTwo(num1, num2);   
    square_result = square(num1);    
    max_result = get_max(num1, num2);  

    printf("Result - Sum: %d , Square : %d, Max : %d", sum_result, square_result, max_result);
    
    return 0;
}