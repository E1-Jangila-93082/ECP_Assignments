#include "01head.h"

void accept_arr(int r,int c,int arr[][c]) { 
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void acc_arrays(int r,int c,int arr1[r][c],int arr2[r][c]) {
    printf("\nEnter first array:\n");
    accept_arr(r, c, arr1);
    printf("\nEnter second array:\n");
    accept_arr(r, c, arr2);
}

void print_arr(int r, int c, int arr[][c]) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%-3d", arr[i][j]);
        }
        printf("\n");
    }
}

void add_arr(int r, int c,int arr1[][c],int arr2[][c]) {
    printf("\nAddition of arrays:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%3d", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}

void sub_arr(int r, int c,int arr1[][c],int arr2[][c]) {
    printf("\nSubtraction of arrays:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%3d", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
}

void mul_arr(int r, int c, int arr1[][c], int arr2[][c]) {
    int result[r][c];

    printf("\nMultiplication of arrays:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            result[i][j] = 0;
            for(int k=0; k<c; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%3d", result[i][j]);
        }
        printf("\n");
    }
}

void row_sum(int r, int c,int arr[][c], int row){
	int sum=0;
	for(int i=0; i<r; i++){
		sum = sum + arr[row][i];
	}
	printf("Sum of elements of row-%d = %d\n",row,sum);
}

void col_sum(int r, int c, int arr[][c], int col){
	int sum=0;
	for(int i=0; i<r; i++){
		sum = sum + arr[i][col];
	}
	printf("Sum of elements of column-%d = %d\n",col,sum);
}
