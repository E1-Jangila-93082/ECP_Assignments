#include<stdio.h>
#include<string.h>

void writec(char*);	
void readc(void);

int main(){
	
	char str[50];
	printf("Type your string : ");
	fgets(str,45,stdin);
	str[strcspn(str,"\n")]='\0';	
	writec(str);
	readc();	
		

return 0;}

void writec(char*str){	
	FILE*file = fopen("01file.txt","w");
	for(int i=0; str[i]!='\0'; i++)
		fputc(str[i],file);
	fclose(file);
}

void readc(void){
	char ch;
	printf("Your string : ");
	FILE*file = fopen("01file.txt","r");
	while((ch=fgetc(file))!=EOF)
		printf("%c",ch);
	printf("\n");
	fclose(file);
}
