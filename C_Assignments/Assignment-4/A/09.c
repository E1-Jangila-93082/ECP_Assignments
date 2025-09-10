#include<stdio.h>

int check_prime(int); 
void range(int,int);

int main(){

	int min,max;
	printf("Enter minimum range : ");
	scanf("%d",&min);	
	printf("Enter maximum range : ");
	scanf("%d",&max);	
	printf("The prime numbers between the given range are :");
	range(min,max);
	printf("\n");
return 0;}

int check_prime(int num){	
for (int i=2; i<=num/2; i++){
	if( num%i==0)
	return 0; //not prime
	}
	return 1; // prime
}

void range(int min,int max){
while(min<=max){
	if(check_prime(min))
	printf("%d ",min);
	min++;}
}




