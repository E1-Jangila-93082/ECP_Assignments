#include<stdio.h>

int main(){
	
	char a;
	int b,x;
	printf("Character: ");
	scanf("%c",&a);
	printf("Number: ");
	scanf("%d",&b);
	printf("Output : ");
	while( x <= b-1){
		printf("%c",a);
		b--;}
	printf("\n");

	return 0;}
