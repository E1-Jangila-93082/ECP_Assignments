#include<stdio.h>

int main(){
	
	int a,b,c,res;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("Enter the third number :");
	scanf("%d",&c);
	printf("\nUsing if-else statement____\n");
	
	if(a>b){
		if(a>c){
		printf("%d is the greatest of them.\n",a);}
		else
		printf("%d is the greatest of them.\n",c);}
	else {
		if(b>c)
		printf("%d is the greatest of them.\n",b); 
		else
		printf("%d is the greatest of them.\n",c); }

	printf("\nUsing Conditional operator____\n");
	int max = ((a>b)?((a>c)?a:c):((b>c)?b:c));
	printf("%d is the greatest.\n",max);
	return 0;}
