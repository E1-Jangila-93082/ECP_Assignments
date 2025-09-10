#include<stdio.h>

int accept(void);
int pwr(int, int);
void display(int);


int main(){
	int base=0,index=0,p;
	base = accept();
	index = accept();
	p = pwr(base,index);
	display(p);
	return 0;}
		
int accept(void){
	int n1;
	printf("Enter the number : ");
	scanf("%d",&n1);
	return n1;}

int pwr(int b, int i){
	int res=1;
	for(int j=1; j<=i ; j++){
	      res = res*b;}
	return res;}

void display(int res){
	printf("Result = %d\n",res);}

