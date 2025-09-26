#include<stdio.h>

void check(int);
int main(){
	
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	check(num);
return 0;}

void check(int num){
	if(num & 3)
	printf("%d is not divisible by 4.\n",num);
	else
	printf("%d is divisible by 4.\n",num);
}
