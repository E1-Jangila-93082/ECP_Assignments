#include<stdio.h>
#include<string.h>

void wr(char*,FILE*);
void rd(char*,FILE*);
void copy(char*,FILE*,FILE*);

int main(){
	
	char ch[200];
	printf("Type your lines :\n");
	FILE*s_file = fopen("s_file03.txt","w+");
	while((fgets(ch,sizeof(ch),stdin))!=NULL){
		if(strcmp(ch,"\n")==0)
		break;

		fputs(ch,s_file);}


	
	rewind(s_file);
	
	FILE*d_file = fopen("d_file03.txt","w+");
	copy(ch,s_file,d_file);
	rewind(d_file);
	
	rd(ch,d_file);	

	fclose(s_file);
	fclose(d_file);
return 0;}

void copy(char*ch,FILE*s_file,FILE*d_file){
	while((fgets(ch,sizeof(ch),s_file))!=NULL){
		fputs(ch,d_file);}
}
/*
void wr(char*ch,FILE*s_file){
	fputs(ch,s_file);
	rewind(s_file);
	printf("\nSource file :\n");
	while((fgets(ch,sizeof(ch),s_file))!=NULL)
	printf("%s",ch);
	printf("\n");
}*/

void rd(char*ch,FILE*d_file){
	printf("\nDestination file :\n");
	while((fgets(ch,sizeof(ch),d_file))!=NULL)
	printf("%s",ch);
	printf("\n");
}
