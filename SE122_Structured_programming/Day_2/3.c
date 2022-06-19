/*
 Any year is input through the keyboard. Write a program to determine whether the year is a
leap year or not.
*/
#include<stdio.h>
int main(){

	int yr;
	printf("Enter any year: ");
	scanf("%d", &yr);

	if(yr%400==0){
		printf("\nYear is leap year\n");
	}
	else if(yr%4==0 && yr%100!=0){
		printf("\nYear is leap year\n");
	}
	else{
		printf("\nYear is not leap year\n");
	}

	return 0;
}
