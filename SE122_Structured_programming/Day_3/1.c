#include<stdio.h>
int main(){
	
	int i, hour, overtime;
	for(i=1; i<=10; i++){
		printf("No %d employee: \n", i);
		printf("Enter the working hour of the employe: ");
		scanf("%d", &hour);
		
		if(hour>40){
			overtime = (hour-40)*12;
			printf("Overtime pay is %d Rs\n", overtime);
		}
		else{
			printf("The employe has not done overtime\n");
		}
		printf("\n");
	}
	
	return 0;
}
