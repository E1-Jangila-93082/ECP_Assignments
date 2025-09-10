#include<stdio.h>

int calc(int,int,char);
int main(){


	int a,b,res;
	char op;
	printf("Enter 'first number' 'operand(+,-,*,/)' 'second number' :\n");
	scanf("%d%*c%c%d",&a,&op,&b);
	res = calc(a,b,op);
	printf("Result = %d\n",res);

return 0;}


int calc(int num1,int num2,char op){
	
	int res;
	switch(op){
		
		case '+' : res = num1+num2;
		break;
		case '-' : res = num1-num2;
		break;
		case '*' : res = num1*num2;
		break;
		case '/' : if(num2!=0)
			   res = num1/num2;
			   else printf("Infinite...\n");
		break;
		default : printf("Invalid operator!\n");
		break;}

}
