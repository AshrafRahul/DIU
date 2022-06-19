/*
Write a program to check the area of the triangle is greater than the perimeter of the triangle.
*/
#include<stdio.h>
int main(){
	
	float length, breadth, perimeter, area;
	printf("Enter lenght of a triangle: ");
	scanf("%f", &length);
	printf("Enter breadth of a triangle: ");
	scanf("%f", &breadth);
	
	area = length*breadth;
	perimeter = 2*(length*breadth);
	
	if(area > perimeter){
		printf("\n\nArea is greater than perimeter\n");
	}
	else if(area < perimeter){
		printf("\n\nPerimeter is greater than area\n");
	}
	else{
		printf("\n\nArea and perimeter are equal\n");
	}
	
	return 0;
}
