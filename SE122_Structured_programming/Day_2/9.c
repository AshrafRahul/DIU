/*
Any character is entered through the keyboard, write a program to determine whether the 
character entered is a capital letter ,a small case letter , a digit or a special symbol.
*/
#include<stdio.h>
int main(){
	char a;
	printf("Enter any single letter,digit or special symbol: ");
	scanf("%c",&a);
	
    if(a>=65 && a<=90){
	   printf("\nCapital letter\n");	
	}	
	else if(a>=97 && a<=122){
	   printf("\nSmall letter\n");	
	}
	else if((a>=0 && a<=47)||(a>=58 && a<=64)||(a>=91 && a<=96)||(a>=123 && a<=127)){
	   printf("\nSpecial symbol\n");	
	}
	else{
		printf("\nInvalid input\n");
	}
	
	return 0;
}
