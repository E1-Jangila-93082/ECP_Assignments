#include<stdio.h>
void ccs(int);

int main(){
	
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	ccs(num);
	printf("\n");
return 0;}

void ccs(int n){
	printf("The Collatz conjecture series :");
	do{
		if(n&1){
			n = ((n<<1)+n)+1;
			printf("%-3d",n);
		}
		else{
	   		n = n>>1;
			printf("%-3d",n);
		}
	}while(n!=1);
}
