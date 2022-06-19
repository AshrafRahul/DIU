#include<stdio.h>
int main(){
	
	double basic_salary, dareness_allowance, house_rent, gross_salary;
	printf("Enter basic salary: ");
	scanf("%lf", &basic_salary);
	
	dareness_allowance = basic_salary * 0.4;
	house_rent = basic_salary * 0.2;
	gross_salary = basic_salary + dareness_allowance + house_rent;
	
	printf("Gross salary: %.2lf\n", gross_salary);
	
	return 0;
}
