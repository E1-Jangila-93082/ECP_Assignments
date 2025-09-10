#include<stdio.h>

int main(){

	int m, y;
	printf("Please enter the month number (1-12) :");
	scanf("%d",&m);
	printf("Please enter the year :");
	scanf("%d",&y);
	 
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
	printf("No. of days = 31\n");

	else if ( m==4 || m==6 || m==9 || m==11 )
	printf("No. of days = 30\n");

	else if (m==2){
		 if( y%400 == 0 || (y%4 == 0 && y%100 != 0)  )
		 printf("No. of days = 29\n");
		
		 else
	 	 printf("No. of days = 28\n");}
	else
	printf("Please enter a valid month number(1-12).\n");
		
	return 0;}
