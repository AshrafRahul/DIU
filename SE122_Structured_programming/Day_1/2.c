#include<stdio.h>
int main(){
	
	float dis;
	printf("Enter distance (in km) between Mirpur and Ashulia: ");
	scanf("%f", &dis);
	
	float met = dis*1000;
	printf("Distance in meter is: %.3f\n", met);
	
	float cen = met*100;
	printf("Distance in centimeter is: %.3f\n", cen);
	
	float inch = cen/2.54;
	printf("Distance in inches is: %.3f\n", inch);
	
	float feet = inch/12;
	printf("Distance in feet is: %.3f\n", feet);
	
	return 0;
}
