#include<stdio.h>
#include<string.h>

void writec(char*,FILE*);	
void copy(FILE*,FILE*);
void wr_des(FILE*);	


int main(){
	FILE*s_file;
	FILE*d_file;
	char str[50];
	printf("Type your string : ");
	fgets(str,45,stdin);
	str[strcspn(str,"\n")]='\0';	
		
	s_file = fopen("02_srcfile.txt","w+");
	writec(str,s_file);
	rewind(s_file);

	d_file = fopen("02_wrfile.txt","w+");
	copy(s_file,d_file);	

	rewind(d_file);
	wr_des(d_file);	

	fclose(s_file);
	fclose(d_file);

return 0;}

void writec(char*str,FILE*s_file){	
	
	for(int i=0; str[i]!='\0'; i++)
		fputc(str[i],s_file);
}

void copy(FILE*s_file,FILE*d_file){
	char ch;
	printf("Your string in source file: ");
	
	while((ch=fgetc(s_file))!=EOF){
		printf("%c",ch);
		fputc(ch,d_file);}
	printf("\n");
}

void wr_des(FILE*d_file){	
	char ch;
	printf("Your string in destination file: ");
	while((ch=fgetc(d_file))!=EOF)
	printf("%c",ch);
	printf("\n");

}
