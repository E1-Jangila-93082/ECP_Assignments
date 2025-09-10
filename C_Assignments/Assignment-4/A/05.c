#include<stdio.h>

void display(char,int);

int main(){

	char c;
	int n;
	printf("Enter the character :");
	scanf("%c",&c);
	printf("Enter number of iteration :");
	scanf("%d",&n);
	display(c,n);
	printf("\n");
return 0;}

void display(char ch,int n){
	for(int i=1; i<=n; i++){
	printf(" %c",ch);}}
