#include<stdio.h>
int main(){
	
	int i,n=200, sum=0;
	
	printf("Numbers between 100 to 200 which are divisible by 9: ");
	for(i=100; i<=n; i++){
		if(i%9==0){
			sum = sum+i;
			printf("%d ", i);
		}
	}
	printf("\n\nTotal sum is: %d", sum);
	
	return 0;
}
