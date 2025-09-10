#include "02.h"

void accept_arr(int*arr, int num){
	printf("\nEnter the array elements :\n");
	for(int i=0; i<num; i++){
		printf("Element%d = ",i+1);
		scanf("%d",&arr[i]);	
	}
}

void display_arr(int*arr, int num){
	printf("\nThe array :");
	for(int i=0; i<num; i++)
		printf("%-3d",arr[i]);
	printf("\n");	
}

void rev(int*arr, int len){
	int temp;
	for(int i=0; i<len/2; i++){
		temp = arr[i];
		arr[i]=arr[len-i-1];
		arr[len-i-1]=temp;
	}
	display_arr(arr,len);
}

int max(int*arr,int len){
	int maxi = arr[0];
	for(int i=1; i<len; i++){
		if(arr[i] > maxi)
			maxi = arr[i];
	}
	return maxi;
}

int min(int*arr,int len){
	int mini = arr[0];
	for(int i=1; i<len; i++){
		if(arr[i] < mini)
			mini = arr[i];
	}
	return mini;
}

int r_dup(int*arr,int len){
	int j,k=0;
	for(int i=0; i<len; i++){
		for(j=0; j<k; j++){
		if(arr[i]==arr[j])
		break;	
		}
		if(j==k){
		arr[k]=arr[i];
		k++;
		}
	}
	return k;
}

void sort_array(int*arr, int len){
	int mini,temp;
	for(int i=0; i<len - 1; i++){
	mini = i;
		for(int j=i + 1; j<len; j++){
		if(arr[mini]>arr[j]) 
		mini = j;		
		}
		if (mini != i) {
			temp=arr[i];
			arr[i]=arr[mini];
			arr[mini]=temp;
		}
	}
}

int search_l(int*arr,int len,int snum){
	for(int i=0; i<len; i++){
		if(snum==arr[i])
			return i;
	}
	return -1;
}

int* search_l_rad(int*arr,int len,int snum){
	for(int i=0; i<len; i++){
		if(snum==arr[i])
			return &arr[i];
	}
	return NULL;
}
