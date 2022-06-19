#include<stdio.h>
int main(){
	
	double total_people=80000, literate_people, illiterate_people;
	double total_men, literate_men, illiterate_men, illiterate_women;
	
	literate_people = total_people * 0.48;
	illiterate_people = total_people - literate_people;
	total_men = total_people * 0.52;
	literate_men = total_men * 0.35;
	illiterate_men = total_men - literate_men;
	illiterate_women = illiterate_people - illiterate_men;
	
	printf("Total illiterate men: %.2lf\n", illiterate_men);
	printf("Total illiterate women: %.2lf\n", illiterate_women);
	
	return 0;
}
