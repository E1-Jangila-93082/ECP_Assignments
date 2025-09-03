#include<stdio.h>

int main(){

	printf("__Using integral data types___\n");
	int n1,n2;
	printf("Enter first number :");
	scanf("%d",&n1);
	printf("Enter second number :");
	scanf("%d",&n2);
	int res1 = n1 + n2;
	printf("Sum of the numbers : %d\n",res1);
	int res2 = n1 - n2;
	printf("Difference of the numbers : %d\n",res2);
	int res3 = n1 * n2; 
	printf("Product of the numbers : %d\n",res3);


	printf("\n__Using unsigned integral data types___\n");
	unsigned int n11,n12;
	printf("Enter first number :");
	scanf("%u",&n11);
	printf("Enter second number :");
	scanf("%u",&n12);
        unsigned int res0 = n11 + n12;
	printf("Sum of the numbers : %u\n",res0);
	unsigned int res01 = n11 - n12;
	printf("Difference of the numbers : %u\n",res01);
	unsigned int res02 = n11 * n12; 
	printf("Product of the numbers : %u\n",res02);
	
	printf("\n__Using signed char ___\n");
	char a1,a2;
	printf("Enter first character :");
	scanf("%*c%c",&a1);
	printf("Enter second character :");
	scanf("%*c%c",&a2);
	int ans1 = a1 + a2;
	printf("Sum of the characters : %d\n",ans1);
	int ans2 = a1 - a2;
	printf("Difference of the characters : %d\n",ans2);
	int ans3 = a1 * a2; 
	printf("Product of the numbers : %d\n",ans3);


	printf("\n__Using unsigned char ___\n");
	unsigned char b1,b2;
	printf("Enter first character :");
	scanf("%*c%c",&b1);
	printf("Enter second character :");
	scanf("%*c%c",&b2);
	unsigned int ans11 = b1 + b2;
	printf("Sum of the characters : %u\n",ans11);
	unsigned int ans12 = b1 - b2;
	printf("Difference of the characters : %u\n",ans12);
	unsigned int ans13 = b1 * b2; 
	printf("Product of the numbers : %u\n",ans13);


	printf("\n__Using long integral data types___\n");
	long c1,c2;
	printf("Enter first number :");
	scanf("%ld",&c1);
	printf("Enter second number :");
	scanf("%ld",&c2);
	long res20 = c1 + c2;
	printf("Sum of the numbers : %ld\n",res20);
	long res21 = c1 - c2;
	printf("Difference of the numbers : %ld\n",res21);
	long res22 = c1 * c2; 
	printf("Product of the numbers : %ld\n",res22);
	

	printf("\n__Using unsigned long integral data types___\n");
	unsigned long d1,d2;
	printf("Enter first number :");
	scanf("%lu",&d1);
	printf("Enter second number :");
	scanf("%lu",&d2);
	unsigned long res30 = d1 + d2;
	printf("Sum of the numbers : %lu\n",res30);
	unsigned long res31 = d1 - d2;
	printf("Difference of the numbers : %lu\n",res31);
	unsigned long res32 = d1 * d2; 
	printf("Product of the numbers : %lu\n",res32);


	return 0;}
