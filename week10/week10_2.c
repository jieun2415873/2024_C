/*#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main(void)
{
	int i;
	int grade[SIZE];
	printf("Enter the scores of 5 people.\n");
	
	for(i=0;i<SIZE;i++)
	  scanf("%d", &grade[i]);
	  
	for(i=0;i<SIZE;i++)
	  printf("grade[%d]=%d\n", i, grade[i]);
	  
	return 0;
}*/

#include<stdio.h>
#define SIZE 5
int main(void)
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum = 0;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter your student grade : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	average = sum/SIZE;
	printf("grade average : %d\n", average);
	return 0;
}


