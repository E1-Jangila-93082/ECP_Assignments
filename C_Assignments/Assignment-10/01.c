#include<stdio.h>
void count_print(int);
void b_print(int);

int main(){

	unsigned int num;
	printf("Enter the number :");
	scanf("%u",&num);

	count_print(num);

	printf("\nThe given number in binary :");
	b_print(num);
	printf("\n");

return 0;}

void count_print(int num){
	
	int occ,count=0;
	int i=0x80;
	while(i!=0x00){
		if(num & i)
		count++;
		occ = count;
		i>>=1;
	}
	printf("\nNo. of 1 bits : %d\n",occ);
}


void b_print(int num){
	if(num==0)
	return 0;
	b_print(num/2);
	printf("%d",num%2);
}


