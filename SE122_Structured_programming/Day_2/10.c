/*
Write a program to find out your grade in final exam. Taking the marks input from user.
Follow DIU grading method
*/
#include<stdio.h>
int main(){
	
	int marks;
	printf("Ennter final exam marks: ");
	scanf("%d", &marks);
	
	if(marks>=80 && marks<100){
		printf("\nGrade is: A+\n");
	}
	else if(marks>=75 && marks<80){
		printf("\nGrade is: A\n");
	}
	else if(marks>=70 && marks<75){
		printf("\nGrade is: A-\n");
	}
	else if(marks>=65 && marks<70){
		printf("\nGrade is: B+\n");
	}
	else if(marks>=60 && marks<65){
		printf("\nGrade is: B\n");
	}
	else if(marks>=55 && marks<60){
		printf("\nGrade is: B-\n");
	}
	else if(marks>=50 && marks<55){
		printf("\nGrade is: C+\n");
	}
	else if(marks>=45 && marks<50){
		printf("\nGrade is: C\n");
	}
	else if(marks>=40 && marks<45){
		printf("\nGrade is: D\n");
	}
	else if(marks>=0 && marks<40){
		printf("\nGrade is: F\n");
	}
	else{
		printf("\nInvalid input\n");
	}
	
	
	return 0;
}
