#include"head.h"

enum {EXIT,ACC_WR,RD_DIS,SRCH_N,SRCH_R,MOD,DEL};
int main(){
	stud s;
	int op;
	do{	
		printf("\n0.EXIT\n");
		printf("1.Accept and Write data.\n");
		printf("2.Read and Display data.\n");
		printf("3.Search student record by name\n");
		printf("4.Search student record by roll number\n");
		printf("5.Modify a student's marks.\n");
		printf("6.Delete a student's record.\n");
		printf("\nEnter your choice : ");
		scanf("%d",&op);
		switch(op){
			case EXIT : printf("\n***QUIT***\n");
				    return 0;
			case ACC_WR : acc_wr();
			break;
			case RD_DIS : read_data();
			break;
			case SRCH_N : char name[10];
					printf("\nEnter the name to search :");
					scanf("%s",name);
					search_n(name);
			break;
			case SRCH_R : int num;
					printf("\nEnter the roll number to search :");
					scanf("%d",&num);
					search_r(num);
			break;
			case MOD : mod();
			break;
			case DEL : del();
			break;
			default : printf("INVALID please enter a valid choice\n");
			break;
			
		}
}while(op!=0);

return 0;}

