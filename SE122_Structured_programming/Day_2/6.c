/*
Write a program to check whether a triangle is valid or not, when the three angles of the 
triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is 
equal to 180 degrees.
*/
#include<stdio.h>
int main(){
	
	float ang1, ang2, ang3, sum;
	printf("Enter 1st angle of the triangle: ");
	scanf("%f", &ang1);
	printf("Enter 2nd angle of the triangle: ");
	scanf("%f", &ang2);
	printf("Enter 3rd angle of the triangle: ");
	scanf("%f", &ang3);
	
	sum = ang1+ang2+ang3;
	
	if(sum==180){
		printf("\n\nTriangle is valid\n");
	}
	else{
		printf("\n\nTraingle is not valid\n");
	}
	
	
	return 0;
}
