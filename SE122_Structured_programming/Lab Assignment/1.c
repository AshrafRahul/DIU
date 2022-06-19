#include<stdio.h>
int main(){
	
	int n, i, sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("%d ", i);	
		sum = sum + i;
	}
	printf("\n%d ", sum);
	
	return 0;
}
