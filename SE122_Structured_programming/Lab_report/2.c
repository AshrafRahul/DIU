#include <stdio.h>
int main(){
    int i, n, a[100];
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d number of elements in the array: \n", n);
    for (i = 0; i < n; i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe values store into the array are: ");
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\nThe values store into the array in reverse are: ");
    for (i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
