//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include <stdio.h>
int main(){
	int i,n,fact=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		fact = fact*i;
	}
	printf("The factorial value of %d is: %d", n, fact);
}
