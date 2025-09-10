#include "01head.h"

int main() {
    int r, c, op, accepted = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);

    int arr1[r][c], arr2[r][c];

    do {
        printf("\n=== MENU ===\n");
        printf("0. EXIT\n");
        printf("1. Accept arrays\n");
        printf("2. Print arrays\n");
        printf("3. Addition of arrays\n");
        printf("4. Subtraction of arrays\n");
        printf("5. Multiplication of arrays\n");
        printf("6. Sum of a row elements\n");
        printf("7. Sum of a column elements\n");
        printf("\nEnter your choice: ");
        scanf("%d", &op);

        switch(op) {
            case 0:
                printf("\n*** QUIT ***\n");
                return 0;

            case 1:
                acc_arrays(r, c, arr1, arr2);
                accepted = 1;
                break;

            case 2:
                if (accepted) {
                    printf("\nFirst array:\n");
                    print_arr(r, c, arr1);
                    printf("\nSecond array:\n");
                    print_arr(r, c, arr2);
                } else {
                    printf("\nEnter arrays first!\n");
                }
                break;

            case 3:
                if (accepted) add_arr(r, c, arr1, arr2);
                else printf("\nEnter arrays first!\n");
                break;

            case 4:
                if (accepted) sub_arr(r, c, arr1, arr2);
                else printf("\nEnter arrays first!\n");
                break;

            case 5:
                if (accepted) mul_arr(r, c, arr1, arr2);
                else printf("\nEnter arrays first!\n");
                break;

            case 6:
                if (accepted){
			int ch,row;
			printf("Select array(1 or 2) :");
			scanf("%d",&ch); 
			if(ch==1){
			printf("Select row :");
			scanf("%d",&row);
			row_sum(r, c, arr1, row);}
			else if(ch==2){
			printf("Select row :");
			scanf("%d",&row);
			row_sum(r, c, arr2, row);}
			else printf("Invalid array!\n");}
                else printf("\nEnter arrays first!\n");
                break;

            case 7:
                if (accepted){
			int ch,col;
			printf("Select array(1 or 2) :");
			scanf("%d",&ch); 
			if(ch==1){
			printf("Select col :");
			scanf("%d",&col);
			col_sum(r, c, arr1, col);}
			else if(ch==2){
			printf("Select col :");
			scanf("%d",&col);
			col_sum(r, c, arr2, col);}
			else printf("Invalid array!\n");}
                else printf("\nEnter arrays first!\n");
                break;
        

            default:
                printf("\n*** Invalid choice ***\n");
        }
    } while(op != 0);

    return 0;
}

