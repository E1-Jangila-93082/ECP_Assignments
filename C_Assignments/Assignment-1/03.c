#include<stdio.h>

int main(){

	char a;
	int b;
	printf("Please enter a character :");
	scanf("%c",&a);
	
	printf("ASCII value of entered character___ \n");
	printf(" In decimal : %d\n In hexadecimal : %x\n In octal : %o\n",a,a,a);

	printf("\nEnter any ASCII value : ");
	scanf("%d",&b);
	printf(" Character : %c\n",b);


	return 0;}
