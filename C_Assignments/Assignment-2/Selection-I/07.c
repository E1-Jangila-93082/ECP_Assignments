#include<stdio.h>

int main(){

	int a,x=0,y=0;
	printf("Enter a year :");
	scanf("%d",&a);
	
	printf("\nWithout using logical operators___\n");
	if(a % 4 == 0){
		if(a % 100 == 0){
			if(a % 400 == 0)
			x = printf("%d is a leap year.\n",a);
			else
			y = printf("%d is not a leap year\n",a);}
		else 
		x = printf("%d is a leap year,\n",a);}
	else
	y = printf("%d is not a leap year.\n",a);
	if(y)
	printf("No. of days = 365.\n");
	if(x)
	printf("No. of days = 366.\n");


	printf("\nUsing logical operators___\n");
	int l=0,m=0;
	if( (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
	l = printf("%d is a leap year.\n",a);
	else
	m = printf("%d is not a leap year.\n",a);
	if(m)
	printf("No. of days = 365.\n");
	if(l)
	printf("No. of days = 366.\n");


	printf("\nUsing conditional operators___\n");
	int h = 0,i=0,j=0;
	h = (a %4 == 0 )? ((a%100!=0)? 1 : ((a%400 == 0)? 1 : 0)):0;
	if(h)
	i = printf("%d is a leap year.\n",a);
	else
	j = printf("%d is not a leap year\n",a);
	if(j)
	printf("No. of days = 365.\n");
	if(i)
	printf("No. of days = 366.\n");
	

	return 0;}
