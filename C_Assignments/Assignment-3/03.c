#include<stdio.h>
#include<math.h>
int main(){

	typedef enum choice{EXIT,SUM,REV,PAL,ARM}CHOICE;
	CHOICE ch;
	
	int a,arm=0,rem=0,rev=0,sum=0,temp,count=0;
	printf("Please enter a number :");
	scanf("%d",&a);
	printf("0.EXIT\n1.Sum of the digits.\n2.Reverse the number.\n3.Check Palindrome or not.\n4.Check Armstrong number.\n");
	printf("Enter your choice :");
	scanf("%d",&ch);
	switch(ch){

		case EXIT : printf("Shuting down...\n");
		break;

		case SUM : while(a!=0){
			rem = a%10;
			sum = sum + rem;
			a /= 10;}
			printf("Sum of the digits is = %d\n",sum);
		break;  

		case REV : while(a!=0){
			rem = a%10;
			rev = rev*10 + rem;
			a /= 10;}
			printf("Reverse of the given number is = %d\n",rev);
		break;  

		case PAL : temp = a; 
			while(a!=0){
			rem = a%10;
			rev = rev*10 + rem;
			a /= 10;}
			if(temp == rev)
			printf("%d number is Palindrome\n",temp);
			else printf("%d is not Palindrome.\n",temp);
		break;  

		case ARM : temp = a;
			while(a!=0){
			count++;
			a/=10;}
			printf("Total count = %d\n",count);
			a = temp;
			while(a!=0){
			rem = a%10;
			arm = arm + pow(rem,count);
			a/=10;}
			if(arm==temp)
			printf("%d is an Armstrong number.\n",temp);
			else printf("%d is Not an Armstrong number.\n",temp);
		break;
		default : printf("INVALID! Please enter the valid choice.\n");
		break;}
	return 0;}
