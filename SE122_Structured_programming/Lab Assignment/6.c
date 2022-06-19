#include<stdio.h>
int main(){
	
	int n,i,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i=i+2){
		printf("%d ", i);
		sum = sum + i;
	}
	printf("\nTotal sum of even number: %d\n", sum);
	
	return 0;
}
