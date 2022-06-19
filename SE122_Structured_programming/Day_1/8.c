#include<stdio.h>
int main(){
	
	int num,a,b,c,d,e,a1,b1,c1,d1,e1;
	printf("Enter any 5 digits number: ");
	scanf("%d", &num);
	
	a = num/10;
	a1 = num%10;
	b = a/10;
	b1 = a%10;
	c = b/10;
	c1 = b%10;
	d = c/10;
	d1 = c%10;
	e = d/10;
	e1 = d%10;
	
	printf("Reverse order: %d%d%d%d%d\n",a1, b1, c1, d1, e1);
	
	return 0;
}
