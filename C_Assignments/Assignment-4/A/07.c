#include<stdio.h>

void fib(int);

int main(){

	int term,res;
	printf("Enter the no. of terms : ");	
	scanf("%d",&term);
	printf("The required fibonacci serires : ");
	fib(term);
	printf("\n");

return 0;}

void fib(int n){
	int a=0, b=1, nextTerm,i;

		if(n<=0)
		printf("Invalid\n");

		printf("%d ",a);   //1st term

		if(n>1)
		printf("%d ",b);   //2nd term

	for( i=3; i<=n; i++){      //from 3rd term
		nextTerm = a + b;
		printf("%d ",nextTerm);
		a = b;
		b = nextTerm;
	}
}
