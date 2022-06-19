#include<stdio.h>
int main(){
	
	int n, row, col, count=1;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++){
		for(col=1; col<=row+1; col++){
			printf("%d ", count=count+1);
		}
		printf("\n");
	}
	
	return 0;
}
