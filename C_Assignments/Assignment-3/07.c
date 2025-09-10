#include<stdio.h>

int main(){

	int a,b,c;
	printf("Enter the number :");
	scanf("%d",&c);
	
	a = 1;
	b = c;
	while(a < b){
		if(c%a==0){
		b = c/a;
		printf("%d * %d = %d\n",a,b,c);
		a++;}
		else
		a++;	
			}

	return 0;}
