#include"head.h"


void accept_data(stud_t*s1){

	printf("Enter roll no. :");
	scanf("%d",&s1->roll);
	printf("Enter name :");
	scanf("%s",s1->name);
	printf("Enter marks :");
	scanf("%f",&s1->marks);
	printf("Enter standard :");
	scanf("%d",&s1->std);
	if(s1->std<5){
		printf("Enter grade :");
		scanf(" %c",&s1->result.grade);
	}else{
		printf("Enter percentagee :");
		scanf("%f",&s1->result.pcent);	
	}	
}

void print_data(stud_t*s1){

	printf("Roll no. : %d\n",s1->roll);
	printf("Name : %s\n",s1->name);
	printf("Marks : %.2f\n",s1->marks);
	printf("Standard : %d\n",s1->std);
	if(s1->std<5)
		printf("Grade : %c\n",s1->result.grade);
	else
		printf("Percentage : %.2f\n",s1->result.pcent);
}


