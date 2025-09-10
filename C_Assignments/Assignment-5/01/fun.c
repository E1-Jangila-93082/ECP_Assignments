#include"01.h"

void accept_marks(float*marks,int subs){
	
	printf("Enter the marks :\n");
	for(int i=0; i<subs; i++){
		printf("Sub%d = ",i+1);
		scanf("%f",&marks[i]);}
}

void print_marks(float*marks, int subs){
	printf("Marks obtained :\n");
	for(int i=0; i<subs; i++)
	printf("Sub%d = %.2f\n",i+1,marks[i]);

}

float tot(float*mark,int subs){
	float tot;
	for(int i=0; i<subs; i++)
		tot = tot+mark[i];
		return tot;
}

float avg(float tot,int subs){
	float avg;
	avg = tot/subs;
	return avg;
}

float maximum(float*marks,int subs){
	float max=marks[0];
	for(int i=1;i<subs;i++)
	if(marks[i]>max)
	max = marks[i];
	return max;
}

float minimum(float*marks,int subs){
	float min=marks[0];
	for(int i=1;i<subs;i++)
	if(marks[i]<min)
	min = marks[i];
	return min;
}

int search_l(float*marks, int subs){
	float smark1,smark2;
	printf("Enter the mark you want to search : ");
	scanf("%f",&smark1);
	for(int i=0;i<subs;i++){
	if(smark1==marks[i]){
	smark2=marks[i];
	return i;}
	}
	return -1;
}

