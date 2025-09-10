#include<stdio.h>

int main(){

	int a,b,c,res;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	int x = a;
	int y = b;
	while(a%b!=0){
		res = a % b;
		printf("%d %% %d = %d\n",a,b,res);
		a = b;
		b = res;}
		printf("The GCD of %d and %d is : %d\n",x,y,res);
		
	return 0;}
