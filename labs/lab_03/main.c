#include "Student.h"
#include <stdio.h>


int main(void) {
    //printf("%i", sum(10,2));
    Student_t student1={"Manya Csongor","IYRAZN","Marosvasarhely",{2005,07,06},0, 9.22};
    printStudent(student1);
    return 0;
}
