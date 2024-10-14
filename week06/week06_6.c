#include <stdio.h>

int main() {
	int answer = 50;
	int guess;
	int attempts = 0;
	
	do{
		printf("Guess a number:");
		scanf("%d", &guess);
		
		attempts++;
		
		if (guess < answer) {
			printf("Low!\n");
		} else if (guess > answer) {
            printf("High!\n");
        } else {
            printf("Congratulation! ");
	    }
    } while (guess != answer);

    printf("Trials : %d\n", attempts);
	
	return 0;
}