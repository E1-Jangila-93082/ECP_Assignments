#include<stdio.h>
#include<string.h>

void ch_remov(char*,char);

int main(){
	
	char ch,str[20];
	printf("Type your string :");
	scanf("%s",str);
	printf("Enter the repeated character to remove : ");
	scanf(" %c",&ch);
	ch_remov(str,ch);
	printf("Your string : %s\n",str);

	
return 0;}


void ch_remov(char*str,char ch){
	int flag;
	int len = strlen(str);
	for(int str[i]=0,str[j]=0; str[i]!='\0'; i++){
		if(str[i]==ch)
		
		for(int j=i; j<len; j++)
		str[j]=str[j+1];
	}
	if(flag==1)
	printf("Repeated characters removed successfully.***\n");
	else
	printf("Character not found!\n");
}
