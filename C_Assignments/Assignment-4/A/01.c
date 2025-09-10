#include<stdio.h>

int accept(void);
int fact(int);
void display(int);

int main(){

	int num=0,facto=0;
	num = accept();
 	facto = fact(num);
	display(facto);
	return 0;}

int accept(void){
	int num=0;
	printf("Enter the number :");
	scanf("%d",&num);
	return num;}

int fact(int num){
	int i,res=1;
	for ( i=1; i<=num; i++ ){
	res = res*i;}
	return res;}

void display(int n1){
	printf("The factorial of the given number is : %d\n",n1);}
