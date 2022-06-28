//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include<stdio.h>
int main(){
    int n, r, sum=0, temp;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (temp=n; n!=0; n=n/10){
        r = n%10;
        sum = sum+(r * r * r);
    }
    if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);
    return 0;
}
