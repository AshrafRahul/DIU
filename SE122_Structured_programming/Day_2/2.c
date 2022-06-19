/*
Any integer is input through the keyboard. Write a program to find out whether itis an odd
number or even number.
*/
#include<stdio.h>
int main(){

	int n;
	printf("Enter any number: ");
	scanf("%d", &n);

	if(n%2==0){
		printf("\nNumber is even\n");
	}
	if(n%2!=0){
		printf("\nNumber is odd\n");
	}

	return 0;
}
