//Md Ashraful Islam
//ID: 221-35-916
//Section: E#include <stdio.h>
int main(){
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("All factors of %d are: ", n);
    for (i = 1; i <= n; i++){
        if (n%i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
