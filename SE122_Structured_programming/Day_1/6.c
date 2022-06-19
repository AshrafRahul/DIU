#include<stdio.h>
int main(){
	
	int C,D,temp;
	printf("Enter C: ");
	scanf("%d", &C);
	printf("Enter D: ");
	scanf("%d", &D);
	
	printf("\n");
	
	temp = C;
	C = D;
	D = temp;
	
	printf("C = %d\n", C);
	printf("D = %d\n", D);
	
	return 0;
}
