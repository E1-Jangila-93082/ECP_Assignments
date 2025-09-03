#include<stdio.h>
#include<limits.h>

int main(){


	printf("__________________________________________________________________________________\n");
	printf("%-23s %-10s %-15s %-23s %-15s","Data type","Size","Format Specf","Min range","Max range\n");
	printf("__________________________________________________________________________________\n");
	printf("%-23s %-10ld %-15s %-23d %-15d\n","Signed char",sizeof(char),"%c",SCHAR_MIN,SCHAR_MAX);
	printf("%-23s %-10ld %-15s %-23d %-15d\n","unsigned char",sizeof(unsigned char),"%c",0,UCHAR_MAX);
	printf("%-23s %-10ld %-15s %-23d %-15d\n","Short int",sizeof(short int),"%hd",SHRT_MIN,SHRT_MAX);
	
	printf("%-23s %-10ld %-15s %-23d %-15d\n","Unsigned short int",sizeof(unsigned short int),"%hu",0,USHRT_MAX);
	printf("%-23s %-10ld %-15s %-23d %-15d\n","Signed int",sizeof(signed int),"%d",INT_MIN,INT_MAX);
	printf("%-23s %-10ld %-15s %-23d %-15d\n","Unsigned int",sizeof(unsigned int),"%u",0,UINT_MAX);
	printf("%-23s %-10ld %-15s %-23ld %-15lu\n","Long int",sizeof(long int),"%lu",LONG_MIN,LONG_MAX);
	printf("%-23s %-10ld %-15s %-23d %-15lu\n","Unsigned long int",sizeof(unsigned long int),"%lu",0,ULONG_MAX);
	
	return 0;}
