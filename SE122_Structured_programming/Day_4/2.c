#include<stdio.h>
int main(){
	
	char choice;
	int n1, n2;
	
	printf("Enter your choice(+, -, *, /): ");
	scanf("%c", &choice);
	
	printf("\nEnter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	
	
	switch(choice){
		case '+':
			printf("\n%d + %d = %d\n", n1, n2, n1+n2);
			break;
		case '-':
			printf("\n%d - %d = %d\n", n1, n2, n1-n2);
			break;
		case '*':
			printf("\n%d * %d = %d\n", n1, n2, n1*n2);
			break;
		case '/':
			printf("\n%d / %d = %.2f\n", n1, n2, (float)n1/(float)n2);
			break;
		default:
			printf("\nNot a valid choice\n");
		
	}
	
	return 0;
}
