#include<stdio.h>
int main(){
	
	double s1, s2, s3, s4, s5, agg, per;
	printf("Enter 1st subject number: ");
	scanf("%lf", &s1);
	printf("Enter 2nd subject number: ");
	scanf("%lf", &s2);
	printf("Enter 3rd subject number: ");
	scanf("%lf", &s3);
	printf("Enter 4th subject number: ");
	scanf("%lf", &s4);
	printf("Enter 5th subject number: ");
	scanf("%lf", &s5);
	
	printf("\n");
	agg = s1+s2+s3+s4+s5;
	per = agg * (100.00/500.00);
	
	printf("Aggregate marks: %.2lf\n", agg);
	printf("Percentage marks: %.2lf\n", per);
	
	
	return 0;
}
