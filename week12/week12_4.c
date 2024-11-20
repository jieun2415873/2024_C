#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int *ptr;
	int sum = 0;
	float average;
	
	for (i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	ptr = grade;
	for(i = 0; i<5; i++)
	{
		printf("grade[%i] = %d\n", i, *(ptr + i));
		sum += *(ptr + i);
	}
	
	average = (float)sum / 5;
	printf("average : %2.f\n", average);
	
	return 0;
}