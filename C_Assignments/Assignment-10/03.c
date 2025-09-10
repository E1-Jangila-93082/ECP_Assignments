#include<stdio.h>

int main(argc,argv*[1]){

	unsigned int num;
	printf("Enter the number :");
	scanf("%u",&argv[1]);

	count_print(argv[1]);

return 0;}

void count_print(int*num){
	
	int occ,count=0;
	int i=0x80;
	while(i!=0x00){
		if(*num & i)
		count++;
		occ = count;
		i>>=1;
	}
	printf("\nNo. of 1 bits : %d\n",occ);
}
