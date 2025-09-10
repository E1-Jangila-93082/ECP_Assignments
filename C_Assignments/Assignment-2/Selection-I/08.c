#include<stdio.h>

int main(){

	int a;
	printf("The price per unit = Rs.5\nPlease enter the quantity :");
	scanf("%d",&a);
	
	float ppu = 5.00; 
	float totp = a*ppu;
	printf("total price : %.2f\n",totp);
	
	if (totp > 30 && totp < 50){
		float pdrop1 = totp - totp/10;
		printf("\nAfter applying 10%% discount, total price : %.2f\n",pdrop1); }

	else if (totp > 50){
		float pdrop2 = totp - (totp*(3.0/20.0));
		printf("\nAfter applying 15%% discount, total price : %.2f\n",pdrop2); }


	return 0;}
