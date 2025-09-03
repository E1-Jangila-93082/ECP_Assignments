#include<stdio.h>
#include<math.h>

int main(){

	int a,b,c,S,A;
	printf("Enter side a : ");
	scanf("%d",&a);
	printf("Enter side b : ");
	scanf("%d",&b);
	printf("Enter side c : ");
	scanf("%d",&c);
	
	S = a + b + c*a + b + c;
	printf("Perimeter of the triangle is : %d\n",S);

	A = S*(S-a)*(S-b)*(S-c);
	int area = sqrt(A);
	printf("and the Area of the triangle is : %d\n",area);
	
	


	return 0;}
