#include<stdio.h>

int main(){

	int x,y;
	printf("Enter the x-cordinate : ");
	scanf("%d",&x);
	printf("Enter the y-cordinate : ");
	scanf("%d",&y);

	printf("The point is : (%d,%d)\n",x,y);

	if(x>0){
		if(y>0)
		printf("It lies in 1st quadrant.\n");
		else
		printf("It lies in 3rd quadrant.\n");}
	else if(x<0){
		if(y>0)
		printf("It lies in 2nd quadrant.\n");
		else
		printf("It lies in 4th quadrant.\n");}
	else if(x=0){
		if(y>0 || y<0)
		printf("It lies in X-axis.\n");}
	else if(y=0){
		if(x>0 || x<0)
		printf("It lies in Y-axis.\n");}
	else printf("It is the origin.\n");


	return 0;}
