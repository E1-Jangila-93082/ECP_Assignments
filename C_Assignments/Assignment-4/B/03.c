#include<stdio.h>

int gcd(int, int);

int main(){

	int num1,num2,res;
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	res = gcd(num1,num2);
	printf("GCD of %d and %d = %d\n",num1,num2,res);
	

return 0;}

int gcd(int n1, int n2){

	if(n2==0)
	return n1;
	else 
	return gcd(n2,n1%n2);

}
