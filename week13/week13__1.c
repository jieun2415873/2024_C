#include <stdio.h>
#include <string.h>


struct Student {
    int id;          
    char name[50];    
    double grade;      
};

int main(void) {
    struct Student student = {24, "Jieun", 4.3};

    student.id = 24;             
    strcpy(student.name, "Jieun");    
    student.grade = 4.3;           

    printf("ID : %d\n", student.id);
    printf("name: %s\n", student.name);
    printf("grade : %.6f\n", student.grade);

    return 0;
}