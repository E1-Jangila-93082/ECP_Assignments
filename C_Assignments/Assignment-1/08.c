#include<stdio.h>

int main(){

	int a,b,c;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("Enter the third number :");
	scanf("%d",&c);
	
	int res = (a+b+c)/3;
	printf("The average of above numbers is : %d\n",res);
	


	return 0;}
