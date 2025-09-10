#include<stdio.h>
#include<string.h>

int main(){
//**
	char str1[30],str1_c[30],str2[30];

	printf("Type your first string : ");
	scanf("%s",str1);
	printf("String-1 : %s\n",str1);	
// a
	printf("\nLength of the string-1 : %ld\n",strlen(str1));
// b	
	printf("\nBefore applying strcpy():\nString-1_copy : %s\n",str1_c);
	strcpy(str1_c,str1);
	printf("After applying strcpy()\nString-1_copy : %s\n",str1_c);

	printf("\nType your second string :");
	scanf("%s",str2);
// c
	printf("\n*After applying strcat()*\n");
	strcat(str1,str2);
	printf("Concatinated string : %s\n\n",str1);
// d
	printf("***When we apply strcmp***\n");
	int res = strcmp(str1,str2);
	if(res<0)
		printf("-String-1 is less than String-2.\n");
	else if(res==0)
		printf("-String-1 and String-2 are equal.\n");
	else
		printf("-String-1 is greater than String-2.\n");
//k
	printf("\n***When we apply strncmp***\n");
	int numc;
	printf("Enter the number of characters to compare :");
	scanf("%d",&numc);
	int resn = strncmp(str1,str2,numc);
	if(resn<0)
		printf("-String-1 is less than String-2.\n");
	else if(resn==0)
		printf("-String-1 and String-2 are equal.\n");
	else
		printf("-String-1 is greater than String-2.\n");
	


// e
	printf("\n***When we apply stricmp***\n");
	int res1 = stricmp(str1,str2);
	if(res1<0)
		printf("String-1 is less than String-2.\n");
	else if(res1==0)
		printf("String-1 and String-2 are equal.\n");
	else
		printf("String-1 is greater than String-2.\n");


// f
	printf("\n***Applying strrev() in string-1***\n");	
	strrev(str1);
	printf("String-1 is reversed : %s\n",str1);
	strrev(str1); // to restore string-1 for further use.


//
	printf("\n***Aplying strchr()***\n");
	char str1_h[30] = "Lannisters Barbarians Vales";
	printf("str1_h : Lannisters Barbarians Vales\n\n");
// g	
	printf("Enter the character :");
	char ch;
	scanf(" %c",&ch);
	char*ptr = strchr(str1_h,ch);
	printf("Addres of whole string = %u\n",str1_h);
	printf("Addres of %c = %u\n",ch,ptr);
// h     
	printf("\nEnter the string :");
	char sstr[30];
	scanf("%s",&sstr);	
	char*sptr = strstr(str1_h,sstr);
	printf("Addres of \"%s\" = %u\n",sstr,sptr);
// i
	char str_p[60];
	size_t num;
	printf("\nEnter the number of characters to copy :");
	scanf("%zu",&num);
	strncpy(str_p,str1_h,num);
	str_p[num]='\0';
	char *ncpy = str_p;
	printf("Copied characters : %s\n",ncpy);
// j
	char str_ap[70],str_s[20];
	printf("\nType a string from where you will append :");
	scanf("%s",str_s);
	printf("Type a string where to append :");
	scanf("%s",str_ap);
	size_t num1;
	printf("Enter the number of characters to append :");
	scanf("%zu",&num1);
	char *nap = strncat(str_ap,str_s,num1);
	printf("Copied characters after appending : %s\n\n",nap);

// l
	char names[100] = "Daidara,Tobi,Ichigo,Strawhat,Megumi";
	printf("Entered string :\"Daidara,Tobi,Ichigo,Strawhat,Megumi\"");
	char *name = strtok(names,",");
	printf("\nFirst token : %s\n",name);
	name = strtok(NULL,",");
	printf("Second token : %s\n",name);
	name = strtok(NULL,",");
	printf("Third token : %s\n",name);

	
return 0;}
