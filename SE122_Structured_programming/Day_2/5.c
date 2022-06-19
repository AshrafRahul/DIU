/*
If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
determine the youngest of the three.
*/
#include<stdio.h>
int main(){

	int arif, fahmid, joy;
	printf("Arif's age is: ");
	scanf("%d", &arif);
	printf("Fahmid's age is: ");
	scanf("%d", &fahmid);
	printf("Joy's age is: ");
	scanf("%d", &joy);

	if(arif<fahmid && arif<joy){
		printf("\n\nArif is youngest\n");
	}
	else if(fahmid<arif && fahmid<joy){
		printf("\n\nFahmid is youngest\n");
	}
	else if(joy<arif && joy<fahmid){
		printf("\n\nJoy is youngest\n");
	}
	else{
		printf("\n\nAll of them are same age\n");
	}

	return 0;
}
