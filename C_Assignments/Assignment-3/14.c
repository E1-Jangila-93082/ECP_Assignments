#include<stdio.h>

int main(){

	int a,flag;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a==1)
	printf("%d is a prime number.\n",a);
	for( int i=2 ; i<a ; i++ ){
		if( a % i == 0 )
		flag = 0;}
	if(flag==0)
	printf("%d is not a prime number.\n",a);
	else
	printf("%d is a prime number.\n",a);

	return 0;}
