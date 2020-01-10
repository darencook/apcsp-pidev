#include <stdio.h>
#include "student.h"

void printStudent(struct Student* student)
{
  printf("Student: %s %s\n", student->fname, student->lname);
  printf("Age: %d\n", student->age);
  printf("ID: %d\n", student->studentID);
}
