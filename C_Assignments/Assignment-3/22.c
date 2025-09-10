#include<stdio.h>

int main(){

	int i,j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
		printf("* ");}
	printf("\n");}
	printf("\n");	
	
	int k,l;
	for(k=1; k<=5; k++){
		for(l=5; l>=k; l--){
		printf("* ");}
	printf("\n");}
	printf("\n");	


 	int m,n;
	for(m=1;m<=5;m++){
	int num=1;
		for(n=1;n<=m;n++){
		printf("%d ",num++);}
	printf("\n");}	
	printf("\n");	


 	int o,p;
	for(o=1;o<=5;o++){
	int num1=5;
		for(p=1;p<=o;p++){
		printf("%d ",num1--);}
	printf("\n");}	
	printf("\n");	


 	int u,v;
	int ch1=65;
	for(u=1;u<=4;u++){
		for(v=1;v<=u;v++){
		printf("%c ",ch1++);}
	printf("\n");}	
	printf("\n");	
	
 	int x,y;
	int ch2=67;
	for(x=1;x<=4;x++){
	ch2 = ch2-2;
		for(y=4;y>=x;y--){
		printf("%c ",ch2++);}
	printf("\n");}	
	printf("\n");	

/*

	int f,g,h;
	char ch1=72;
//	char ch2=72;
	for(f=1; f<=4; f++){
		for(g=1; g<=4-f; g++){
		printf(" ");}
		ch1 = ch1-(f+1);
		for(h=1;h<=f;h++){
		printf(" %c",ch1++);} //increasing letters
//		ch2 = ch2-f;
//		for(h=f+1;h<=f;h++){
//		printf("%c ",ch2--);}
	printf("\n");}


*/
return 0;}
