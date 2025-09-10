#include <stdio.h>

int main() {
    int num, i, pnum;

    for(num = 2; num <= 100; num++) {
        pnum = 1;  // assume number is prime

        for(i = 2; i <= num/2; i++) {
           
		 if(num % i == 0){
	   	 pnum = 0; 
           	 break;} 
	}

        if(pnum == 1) 
        printf("%d ", num);}

    printf("\n");

 return 0;}

