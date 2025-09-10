#include<stdio.h>

int main(){

	int id,DeptNo;
	char DsgnCode;
	printf("Please enter the details...\nEmployee id : ");
	scanf("%d",&id);
	printf("Dept. number : ");
	scanf("%d",&DeptNo);
	printf("Designation code : ");
	scanf(" %c",&DsgnCode);
	
	switch(DeptNo){
		case 10 : switch(DsgnCode){
				case 67 :
				printf("Employee with employee id-%d is working in Marketing department as Clerk.\n",id);
			  	break;
				case 77 :
				printf("Employee with employee id-%d is working in Marketing department as Manager.\n",id);
			  	break;
				case 83 :
				printf("Employee with employee id-%d is working in Marketing department as Supervisor.\n",id);
			  	break;
				case 115 :
				printf("Employee with employee id-%d is working in Marketing department as Security Officer.\n",id);
			  	break;
			  default : printf("INVALID! Please enter valid Designation code.\n");}
			  break;
		case 20 : switch(DsgnCode){
				case 67 :
				printf("Employee with employee id-%d is working in Management department as Clerk.\n",id);
			  	break;
				case 77 :
				printf("Employee with employee id-%d is working in Management department as Manager.\n",id);
			  	break;
				case 83 :
				printf("Employee with employee id-%d is working in Management department as Supervisor.\n",id);
			  	break;
				case 115 :
				printf("Employee with employee id-%d is working in Management department as Security Officer.\n",id);
			  	break;
			  default : printf("INVALID! Please enter valid Designation code.\n");}
			  break;
		case 30 : switch(DsgnCode){
				case 67 :
				printf("Employee with employee id-%d is working in Sales department as Clerk.\n",id);
			  	break;
				case 77 :
				printf("Employee with employee id-%d is working in Sales department as Manager.\n",id);
			  	break;
				case 83 :
				printf("Employee with employee id-%d is working in Sales department as Supervisor.\n",id);
			  	break;
				case 115 :
				printf("Employee with employee id-%d is working in Sales department as Security Officer.\n",id);
			  	break;
			  default : printf("INVALID! Please enter valid Designation code.\n");}
			  break;
		case 40 : switch(DsgnCode){
				case 67 :
				printf("Employee with employee id-%d is working in Designing department as Clerk.\n",id);
			  	break;
				case 77 :
				printf("Employee with employee id-%d is working in Designing department as Manager.\n",id);
			  	break;
				case 83 :
				printf("Employee with employee id-%d is working in Designing department as Supervisor.\n",id);
			  	break;
				case 115 :
				printf("Employee with employee id-%d is working in Designing department as Security Officer.\n",id);
			  	break;
			  default : printf("INVALID! Please enter valid Designation code.\n");}
			  break;
	default : printf("INVALID! Please enter a valid department number.\n");
	break;}


	return 0;}
