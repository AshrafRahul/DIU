/*
If cost price and selling price of an item is input through the keyboard, write aprogram to
determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred
*/
#include<stdio.h>
int main(){

	float cost_price, selling_price;
	printf("Enter cost price value: ");
	scanf("%f", &cost_price);
	printf("Enter selling price value: ");
	scanf("%f", &selling_price);

	if(cost_price < selling_price){
		printf("\n\nThe seller has made profit\n");
		float prof = selling_price - cost_price;
		printf("Total profit: %.2f\n", prof);
	}

	else if(cost_price > selling_price){
		printf("\n\nThe seller has made loss\n");
		float loss = cost_price - selling_price;
		printf("Total loss: %.2f\n", loss);
	}

	else{
		printf("\n\nNo profit or no loss\n");
	}


	return 0;
}
