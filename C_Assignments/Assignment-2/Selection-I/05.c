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
	
	if(a<b){
		if(a<c){
		printf("%d is the least of them.\n",a);}
		else
		printf("%d is the least of them.\n",c);}
	else {
		if(b<c)
		printf("%d is the least of them.\n",b); 
		else
		printf("%d is the least of them.\n",c); }

	printf("\nUsing Conditional operator____\n");
	int min = ((a<b)?((a<c)?a:c):((b<c)?b:c));
	printf("%d is the least.\n",min);
	return 0;}
