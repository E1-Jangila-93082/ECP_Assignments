#include<stdio.h>

typedef struct student{ int roll; 
		char name[10];
		float marks;}data;

void accept_data(data *s1);
void print_data(data s1);

int main(){
	
	data s1;
	accept_data(&s1);
	print_data(s1);

return 0;}


void accept_data(data *s1){

	printf("Enter roll no. :");
	scanf("%d",&s1->roll);
	printf("Enter name :");
	scanf("%s",s1->name);
	printf("Enter marks :");
	scanf("%f",&s1->marks);
	
}

void print_data(data s1){

	printf("Roll no. : %d\n",s1.roll);
	printf("Name : %s\n",s1.name);
	printf("Marks : %.2f\n",s1.marks);

}


