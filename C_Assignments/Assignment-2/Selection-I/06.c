#include<stdio.h>

int main(){

	int num;
	printf("Enter a 5_digit number :");
	scanf("%5d",&num);
	
		int a = num%10;
		num /= 10; 
		int b = num%10;
		num /= 10;
		int c = num%10;
		num /= 10;
		int d = num%10;
		num /= 10;
		int e = num%10;

	if ( (a == e) && (b == d))
	printf("The given number is a palindrome.\n");
	else 
	printf("The given number is not a palindrome.\n");
		
	return 0;}
