#include<stdio.h>
int main(){
	
	float f,c;
	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &f);
	
	c = (f-32)*((float)5/(float)9);
	printf("Centigrade temperature is: %.2f\n", c);
	
	return 0;
}
