#include<stdio.h>
#include<string.h>
void accept_names(char names[5][50]);
void print_names(char names[5][50]);
void sort_names(char names[5][50]);

int main(){

	char names[5][50];
	accept_names(names);
	printf("\nBefore sorting :\n");
	print_names(names);
	sort_names(names);
	printf("\nAfter sorting :\n");
	print_names(names);

return 0;}

void accept_names(char names[5][50]){
	printf("Enter 5 student names :\n");
	for(int i=0; i<5; i++){
		printf("Student-%d : ",i+1);
		scanf("%s",names[i]);
	}
}

void print_names(char names[5][50]){
	printf("\nStudent names :\n");
	for(int i=0; i<5; i++){
		printf("%s\n",names[i]);
	}
}

void sort_names(char names[5][50]){
	int temp[50];
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(strcmp(names[i],names[j])>0){
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);	
			}
			
		}
	}

}
