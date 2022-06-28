#include<stdio.h>
int main(){
	
	int i,n, sum=0;
	printf("Enter any six digit number: ");
	scanf("%d", &n);
	
	printf("\nNumbers in reverse order: ");
	for(i=n; i>0; i=i/10){
		printf("%d", i%10);
		sum = sum + (i%10);
	}
	printf("\nTotal sum of all numbers: %d", sum);
	
	
	
	return 0;
}
