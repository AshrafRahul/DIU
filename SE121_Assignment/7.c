//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include <stdio.h>
int main(){
    int n, mod, reverse = 0;
    printf("Enter any number to find reverse: ");
    scanf("%d", &n);
    int num = n;
    while (num != 0){
        mod = num % 10;
        reverse = reverse * 10 + mod;
        num /= 10;
    }
    printf("Reverse Number : %d\n", reverse);
    return 0;
}
