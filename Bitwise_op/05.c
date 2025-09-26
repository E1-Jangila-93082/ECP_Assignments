#include<stdio.h>

void check(int);
int main(){
	
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	check(num);
return 0;}

void check(int num){
	if(num & 1)
	printf("%d is odd.\n",num);
	else
	printf("%d is even.\n",num);
}
