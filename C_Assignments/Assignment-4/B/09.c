#include<stdio.h>

int calc(int,int,char,int*);
int main(){

	int num1,num2,op,res;

	printf("Enter first number :");
	scanf("%d",&num1);
	printf("Enter the operator :");
	scanf("%*c%c",&op);
	printf("Enter second number :");
	scanf("%d",&num2);

	int flag = calc(num1,num2,op,&res);

	if (flag==0)
	printf("Result = %d\n",res);
	else if(flag==1)
	printf("Error due to zero denominator.\n");
	else if(flag==2)
	printf("Enter valid operator\n");

return 0;}

int calc(int num1,int num2,char op,int*res){

	switch(op){

		case '+' : *res = num1+num2;
		break;
		case '-' : *res = num1-num2;		   
		break;
		case '*' : *res = num1*num2;
		break;
		case '/' : if(num2!=0)
			   *res = num1/num2;
			   else if(num2==0)
			   return 1;		   
		break;
		default : 
		return 2;
	}

return 0;
}
