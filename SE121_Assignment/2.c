//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include <stdio.h>
int main(){
	int n,i,sum=0;
	printf("How many term: ");
	scanf("%d", &n);
	printf("\nOdd numbers are: ");
	for(i=1; i<=n; i=i+2){
		sum = sum+i;
		printf("%d ", i);
	}
	printf("\nSum of all odd numbers: %d", sum);
	return 0;
}
