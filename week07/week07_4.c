#include <stdio.h>

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int get_integer() {
    int i;
    printf("Enter the value :");  
    scanf("%d", &i);   
    return i;
}
	
int main(void) {
    int n, r;

    n = get_integer();
    r = get_integer();
    
    printf("The result of C(%d, %d) is %d\n", n, r, combination(n, r));
    
    return 0;
}	