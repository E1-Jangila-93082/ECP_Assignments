#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int num, count=0;
	int min = 1;
	int max = 1000;
	srand(time(NULL));
	int randNo = (rand() % (max - min +1))+min;

	do{
	int num;
	printf("Enter your guess(1-1000) :");
	scanf("%d",&num);
	if(num > randNo)
	printf("***right***\n");
	else if(num < randNo)
	printf("***left***\n");
	else
	printf("Congrats! You won...\n");
	
	count++;
	}
	while(num!=randNo && count<=9);
	return 0;}
