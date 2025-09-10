#include<stdio.h>

int main(){

	int a,fact;
	printf("Enter the number :");
	scanf("%d",&a);
	int j = 2;
	int i = 2;
	while(i <= a/2){
		if( a%i==0 ){
		fact = i;
	
		while(j <= fact/2){
			if(fact%j==0)
			printf(" %d *",j);
			}
			j++;}
		i++;}
			return 0;}
