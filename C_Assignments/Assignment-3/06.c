#include<stdio.h>

int main(){

	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	int i=1;
	while( i <= num/2){
		if(num % i == 0){
		printf("%d ",i);}
		i++;}
	return 0;}
