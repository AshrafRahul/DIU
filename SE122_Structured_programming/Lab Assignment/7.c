#include<stdio.h>
int main(){
	
	int i,j;
	
	printf("\nPrime numbers are: ");
	for(i=2; i<=200; i++){
		int count = 0;
		for(j=1; j<=i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d  ", i);
		}
	}
	
	return 0;
}
