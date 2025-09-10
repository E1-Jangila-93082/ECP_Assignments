#include<stdio.h>
typedef struct student{
	int roll;
	char name[20];
	float marks;
	int std;
	union result{char grade;
		float pcent;}result;
}stud_t;


void accept_data(stud_t*);
void print_data(stud_t*);
