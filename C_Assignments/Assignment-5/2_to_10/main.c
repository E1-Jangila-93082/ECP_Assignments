#include "02.h"
enum{EXIT,DIS,REV,MAX,MIN,REM,SORT,SEARCH_I,SEARCH_A};

int main(){

	int num,opt;
	printf("Enter the number array elements :");
	scanf("%d",&num);
	
	int *arr = (int*)malloc(num*sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	accept_arr(arr, num); 

	do{	
		printf("\n0.EXIT\n");
		printf("1.Display the array.\n");
		printf("2.Reverse the array.\n");
		printf("3.Find maximum\n");
		printf("4.Find minimum\n");
		printf("5.Remove the duplicate element.\n");
		printf("6.Sort the array\n");
		printf("7.Search the element and return index(linear)\n");
		printf("8.Search the element and return address(linear)\n");
		printf("\n***Select your option :");
		scanf("%d",&opt);
				
		switch(opt){
			
			case EXIT : printf("\n***QUIT***\n");
			break;
			case DIS : display_arr(arr,num);
			break;
			case REV : rev(arr,num); 
			break;
			case MAX : int maxi = max(arr,num);
				   printf("\nMaximum element = %d\n", maxi);
			break;	
			case MIN : int minim = min(arr,num);
				   printf("\nMinimum element = %d\n", minim);
			break;	
			case REM : int remo = r_dup(arr,num);
				   printf("\nUnique array :");
				   for(int i=0; i<remo; i++)
					   printf("%-3d",arr[i]); 
				   printf("\n");
			break;
			case SORT : sort_array(arr,num);
				   display_arr(arr,num);
			break;
			case SEARCH_I : int snum;
					printf("\nEnter the element to search :");
					scanf("%d",&snum);
					int ind = search_l(arr,num,snum);
					if (ind != -1) {
					    printf("The searched element is found at index-%d\n", ind);
					} else {
					    printf("Element not found.\n");
					}
			break;
			case SEARCH_A : int fnum;
					printf("\nEnter the element to search :");
					scanf("%d",&fnum);
					int* add = search_l_rad(arr,num,fnum);
					if (add != NULL) {
					    printf("The address of searched element is :%u\n", (void*)add);
					} else {
					    printf("Element not found.\n");
					}
			break;
			default : printf("\nPlease enter a valid option.\n");
			break;
		}

	}while(opt != EXIT);	
	
	free(arr); 
	
	return 0;
}
