#include<stdio.h>

int main(){

  	char a;
	printf("Please enter a character :");
	scanf("%c",&a);

	if( (a >= 97 && a <= 122) || (a >= 65 && a <= 90) ){
		printf("'%c' is an Alphabet",a);
		if( a >= 65 && a <= 90 )
			printf(" and its an upperscase character.\n");
		else 
			printf(" and its a lowerscase character.\n");}
	
	else  if( a >= 48 && a <= 57 )
	printf("%c is a digit.\n",a);
	else if( a == 32 )
	printf("You've hit the SPACE.\n");
	else if( a == 9 )
	printf("You've hit the TAB.\n");
	else if( a == 13 )
	printf("It is a carriage return.\n");
	else if( a == 10 )
	printf("You've entered a NEW LINE.\n");
	else
	printf("You entered some other character which is not listed.\n");


	return 0;}
