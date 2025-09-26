#include<stdio.h>

void up_div(int);
void low_div(int);

int main(){
	
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	up_div(num);
	low_div(num);
	printf("\n");
return 0;}

void up_div(int num){

	while(num > 0){
		if(num & 3)
		num++;
		else{
		printf("Upper divisible :%d\n",num);
		break;}
	}
}

void low_div(int num){

	while(num > 0){
		if(num & 3)
		num--;
		else{
		printf("Lower divisible :%d\n",num);
		break;}
	}
}
