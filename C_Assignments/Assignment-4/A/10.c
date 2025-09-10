#include<stdio.h>

int check(int);
void display(int,int);

int main(){

	int month,year;
	printf("Enter the year : ");
	scanf("%d",&year);
	int y = check(year);
	if(y==0)
	printf("%d is a leap year.\n",year);
	else 
	printf("%d is not a leap tear.\n",year);

	printf("Enter the month : ");
	scanf("%d",&month);
	display(month,year);
	


return 0;}

int check(int year){

	if(year%4==0 && year%100!=0 || year%400==0)
	return 0;  // False - leap year.
	else 
	return 1;  // True - not leap year.
}

void display(int month, int year){

	switch (month){

		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
		printf("No. of days = 31.\n");
		break;

		case 4 : case 6 : case 9 : case 11 :
		printf("No. of days = 30.\n");
		break;

		case 2 : if(check(year))
			 printf("No. of days = 28.\n"); // not leap year
			 else
			 printf("No. of days = 29.\n"); // leap year
		
	}

}
