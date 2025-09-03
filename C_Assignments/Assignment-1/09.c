#include<stdio.h>

int main(){

	float a,b;
	printf("Enter temperature in Celcius :");
	scanf("%e",&a);

	float res = a * 9/5 + 32;
	printf("Temperature in Fahrenheit = %.2f\n\n",res);


	printf("Enter temperature in Fahrenheit :");
	scanf("%e",&b);
	float res2 =(5.0/9)*(b - 32);
	printf("Temperature in Celcius : %.2f\n",res2);

	return 0;}
