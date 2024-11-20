#include <stdio.h>

int main(void) {
    FILE *fp; 
    char word[50];  
    
    fp = fopen("sample.txt", "w");  
    if (fp == NULL) {
        printf("file cannot be open.\n");
        return 1; 
    }

    for (int i = 0; i < 3; i++) {
        printf("input a word: ");  
        scanf("%49s", word);  
        fprintf(fp, "%s\n", word);  
    }

    fclose(fp);

    return 0;
}
