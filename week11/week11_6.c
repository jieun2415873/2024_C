/*#include <stdio.h>

void main(void){
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	   printf("file cannot be open\n");
	   
	while((c = fgetc(fp))!= EOF){
		putchar(c);
	}
	
	fclose(fp);
}*/

#include <stdio.h>
#include <string.h>

void main(void) {
    FILE *fp = NULL;          
    char line[100];           
    char *word;
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("file cannot be open\n");
    }
    
    while (fgets(line, sizeof(line), fp) != NULL) {
        word = strtok(line, " \n");  
        while (word != NULL) {
            printf("%s\n", word); 
            word = strtok(NULL, " \n"); 
        }
    }
    
    fclose(fp);
}