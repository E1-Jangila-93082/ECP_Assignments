#include<stdio.h>
#include<string.h>
#include<unistd.h>

struct student{
		int roll;
		char name[10];
		float marks;};
typedef struct student stud;

void accept_data(stud *);
void print_data(stud *);
void write_data(stud *);
void read_data(void);
void mod(void);
void search_n(char*);
void search_r(int);
void del(void);
void acc_wr(void);
