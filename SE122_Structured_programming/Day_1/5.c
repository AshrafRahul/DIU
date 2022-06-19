#include<stdio.h>
#include<math.h>
int main(){
	
	double l, b, r, rectangular_area, rectangular_perimeter, circle_area, circle_circumference;
	printf("Enter lenght of rectangle: ");
	scanf("%lf", &l);
	printf("Enter breadth of rectangle: ");
	scanf("%lf", &b);
	
	printf("\n");
	
	rectangular_area = l*b;
	printf("Area of rectangle is: %.2lf\n", rectangular_area);
	rectangular_perimeter = 2.00*(l*b);
	printf("Perimeter of rectangle is: %.2lf\n", rectangular_perimeter);
	
	printf("\n\n");
	
	printf("Enter radius of circle: ");
	scanf("%lf", &r);
	
	printf("\n");
	
	circle_area = M_PI*r*r;
	printf("Area of circle is: %.2lf\n", circle_area);
	circle_circumference = 2.00*M_PI*r;
	printf("Circumference of circle is: %.2lf\n", circle_circumference);
	
	return 0;
}
