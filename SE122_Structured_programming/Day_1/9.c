#include<stdio.h>
int main(){
	
	int num,a,b,c,d,a1,b1,c1,d1,sum;
	printf("Enter any digits number: ");
	scanf("%d", &num);
	
	a = num/10;
	a1 = num%10;
	b = a/10;
	b1 = a%10;
	c = b/10;
	c1 = b%10;
	d = c/10;
	d1 = c%10;
	
	sum = a1+d1;
	
	printf("Sum of first and last digits of the number is, %d+%d = %d",d1,a1,sum);
	
	return 0;
}
