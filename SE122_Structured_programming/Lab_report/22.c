#include<stdio.h>
int main(){
	
	int i, n, sum=0,m=1;
	printf("Enter the value n: ");
	scanf("%d", &n);
	
	printf("\nSum of the series: ");
	for(i=1; i<=n; i++){
		sum = sum+m;
		m = (m*10)+1;
		
		if(i==1){
			printf("\n1 + ");
		}
		else if(i==n){
			printf("%d", m);
		}
		else{
			printf("%d + ", m);
		}
	}
	printf(" = %d", sum);
	
	return 0;
}
