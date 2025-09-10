#include<stdio.h>

int power(int,int);

int main(){

	int base,index,pwr;
	printf("Enter the base : ");
	scanf("%d",&base);
	printf("Enter the index : ");
	scanf("%d",&index);
	pwr = power(base,index);
	printf("Result = %d\n",pwr);

return 0;}

int power(int base,int index){

	if(base==0)
	return 0;
	else if(base==1 || index==0)
	return 1;
	else if(index==1)
	return base;
	else
	return base*power(base,index-1);
}
