#include"head.h"

void accept_data(stud *s){
	printf("\n***Enter the student details***\n");
		printf("Name : ");
		scanf("%s",s->name);
		printf("roll number : ");
		scanf("%d",&s->roll);
		printf("Marks : ");
		scanf("%f",&s->marks);
}

void print_data(stud *s){
	
	printf("Name : %s\n",s->name);
	printf("Roll number : %d\n",s->roll);
	printf("Marks : %.2f\n",s->marks);
}

void write_data(stud *s){
	int num;
	FILE*file = fopen("data.txt","ab");
	fwrite(s,sizeof(stud),1,file);
	fclose(file);
}
void acc_wr(void){
	stud s;
	accept_data(&s);
	write_data(&s);
}

void read_data(void){
	stud s;
	int count =0;
	FILE*file = fopen("data.txt","rb");
	printf("\n***Data from file***\n");
	while(fread(&s,sizeof(stud),1,file)!=0){
		count++;
		printf("\nStudent%d\n",count);
		print_data(&s);}
	fclose(file);
}
void search_n(char*name){
	stud s;
	FILE*file = fopen("data.txt","rb");
	while(fread(&s,sizeof(stud),1,file)!=0){
		if(!strcmp(name,s.name)){
			printf("\n*The student is found*\n");
			print_data(&s);
		}
	}
}
void search_r(int num){
	stud s;
	FILE*file = fopen("data.txt","rb");
	while(fread(&s,sizeof(stud),1,file)!=0){
		if(num==s.roll){
			printf("\n*The student is found*\n");
			print_data(&s);
		}
	}
}
void mod(void){
	stud s;
	char name[10];
	float new_marks;
	printf("\nType name of student to modify : ");
	scanf("%s",name);
	printf("\nEnter the new marks :");
	scanf("%f",&new_marks);
	FILE*file = fopen("data.txt","rb+");
	while(fread(&s,sizeof(stud),1,file)!=0){
		if(!strcmp(name,s.name)){
			s.marks=new_marks;
			fseek(file,-1*sizeof(stud),SEEK_CUR);
			fwrite(&s,sizeof(stud),1,file);
			break;	
		}
	}
	fclose(file);
}

void del(void){
	char name[10];
	stud s;
	printf("\nEnter a name to remove :");
	scanf("%s",name);
	FILE*file = fopen("data.txt","rb+"); 
	while(fread(&s,sizeof(stud),1,file)!=0){
		if(!strcmp(name,s.name)){
			while(fread(&s,sizeof(stud),1,file)!=0){
		
				fseek(file,-2*sizeof(stud),SEEK_CUR);
				fwrite(&s,sizeof(stud),1,file);
				fseek(file,+1*sizeof(stud),SEEK_CUR);
			}
			break;	
		}
	}
	fseek(file,-1*sizeof(stud),SEEK_END);
	int pos = ftell(file);
;
	printf("*The above student's record has been successfully removed.*\n");
	fclose(file);	
	truncate("data.txt",pos);
}	
