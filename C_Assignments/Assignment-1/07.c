#include<stdio.h>

int main(){

	int num;
	printf("Enter a 4-digit number :");
	scanf("%4d",&num);

	int a,b,c,d;
	d = num%10;
	num = num/10;
	c = num%10;
	num = num/10;
	b = num%10;
	num = num/10;
	a = num%10;
	num = num/10;
	
	printf("\nFace value : %d \t %d \t%d\t%d\n",a,b,c,d);
        printf("Place value : %d+%d+%d+%d\n",a*1000,b*100,c*10,d);  	
        printf("Reverse : %d%d%d%d\n",d,c,b,a);                                                               
     
	return 0;}
