#include<stdio.h>
int main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,sum,avg;
	printf("Enter number1: ");
	scanf("%d", &n1);
	printf("Enter number2: ");
	scanf("%d", &n2);
	printf("Enter number3: ");
	scanf("%d", &n3);
	printf("Enter number4: ");
	scanf("%d", &n4);
	printf("Enter number5: ");
	scanf("%d", &n5);
	printf("Enter number6: ");
	scanf("%d", &n6);
	printf("Enter number7: ");
	scanf("%d", &n7);
	printf("Enter number8: ");
	scanf("%d", &n8);
	printf("Enter number9: ");
	scanf("%d", &n9);
	printf("Enter number10: ");
	scanf("%d", &n10);
	
	sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	printf("\nTotal sum : %d\n", sum);
	
	avg = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
	printf("Average : %d", avg);
	
	
	return 0;
}
