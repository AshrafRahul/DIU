#include<stdio.h>
int main(){
	
	int i, n, count=0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=2; i<n; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0){
		printf("\n%d is Prime number\n", n);
	}
	else{
		printf("%d is not a Prime number\n", n);
	}
	
	return 0;
}
