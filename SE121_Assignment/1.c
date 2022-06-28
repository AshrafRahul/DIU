//Md Ashraful Islam
//ID: 221-35-916
//Section: E
#include<stdio.h>
int main(){   
    int n, i, sum = 0;
    float avg;
    printf("Please Enter the 10 Numbers: ");
    for(i = 1; i <= 10; i++){
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = (float)sum / 10;
    printf("\nThe Sum of 10 Numbers: %d", sum); 
    printf("\nThe Average of 10 Numbers: %.2f\n", avg);
    return 0;
}
