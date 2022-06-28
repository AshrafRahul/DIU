#include <stdio.h>
int main(){
    int num, count = 0, i;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    if (num == 0 || num == 1){
        count = 1;
    }
    for (i = 2; i < num; i++){
        if (num % i == 0){
            count++;
            break;
        }
    }
    if (count == 0){
        printf("Prime number\n");
    }
    else{
        printf("not a prime number\n");
    }
    return 0;
}
