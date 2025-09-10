#include"01.h"

int main(){
	
	int subs;
	printf("Enter the number of subjects :");
	scanf("%d",&subs);
	float marks[subs];
	accept_marks(marks,subs);
	typedef enum alts{EXIT,PRINT,TOT_AVG,MAX,MIN,SEARCH_L}options;
	options opt;
	printf("0.EXIT\n1.Marks overview\n2.Calculate total and average\n3.Find maximum mark obtained\n4.Find minimum mark obtained\n");
do{
	printf("Select your option :");
	scanf("%d",&opt);
switch(opt){

	case EXIT : return 0;
	break;

	case PRINT : print_marks(marks,subs);
	break;

	case TOT_AVG : float total = tot(marks,subs);
		   printf("Total marks obtained = %.2f\n",total);
		   float avg_mark = avg(total,subs);
	       	   printf("Average mark obtained = %.2f\n",avg_mark);
	break;

	case MAX : float max = maximum(marks,subs);
		   printf("The maximum mark obtained : %.2f\n",max);
	break;

	case MIN : float min = minimum(marks,subs);
		   printf("The minimum mark obtained : %.2f\n",min);
	break;

	case SEARCH_L : int i;
			i = search_l(marks,subs);
			if(i==-1)
			printf("The marks you searched for is invalid.\n");
			else
			printf("The marks you searched for is in index number : %d\n",i);
	
	}
}while(opt!=EXIT);

return 0;}







