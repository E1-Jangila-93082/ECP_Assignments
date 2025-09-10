#include<stdio.h>

int main(){

	int a;
	printf("Enter the number :");
	scanf("%d",&a);
 	int i = 2;
	while(a != 0){
		if( a%i==0 ){
		printf("%d ",i);
		a /= i; }
		else
		 i++;}
	
	return 0;}
