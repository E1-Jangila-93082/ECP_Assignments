#include<stdio.h>

int main(){

	int m,y;
	printf("Enter the month number(1-12) : ");
	scanf("%d",&m);
	printf("Enter the year : ");
	scanf("%d",&y);

	
	
	switch(m){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
		 printf("No. of days = 31\n");
		break;
		case 4 : case 6 : case 9 : case 11 :
		 printf("No. of days = 30\n");
		break;
		case 2 : if( y%4==0 && y%100!=0 || y%400==0 )
				printf("No. of days = 29\n");
			   else
				printf("No. of days = 28\n");	
		break;
		default : printf("INVALID! Please enter a valid month number(1-12).\n");
		break;}
	return 0;}
