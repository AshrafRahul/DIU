/*
 Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three 
points fall on one straight line.
*/
#include<stdio.h>
int main(){
	
	int x1,y1,x2,y2,x3,y3,line1,line2;
	printf("x1: ");
	scanf("%d", &x1);
	printf("y1: ");
	scanf("%d", &y1);
	printf("x2: ");
	scanf("%d", &x2);
	printf("y2: ");
	scanf("%d", &y2);
	printf("x3: ");
	scanf("%d", &x3);
	printf("y3: ");
	scanf("%d", &x3);
	
	line1 = (x2-x1)/(y2-y1);
	line2 = (x3-x2)/(y3-y2);
	
	if(line1==line2){
		printf("\n\nAll the three points fall on a straight line\n");
	}
	else{
		printf("\n\nAll the three point do not fall on a straight line\n");
	}
	
	
	return 0;
}
