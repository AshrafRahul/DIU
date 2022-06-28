//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include<stdio.h>
int main(){
    int n, sum=0, mod;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &n);
    int num = n;
    while (num != 0){
        mod = num % 10;
        sum += mod;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
