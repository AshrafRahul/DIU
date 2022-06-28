#include <stdio.h>
int main(){
    int arr1[100], arr2[100];
    int i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++){
        printf("element %d : ", i);
        scanf("%d", &arr1[i]);
    }
    // coping elements of first array to second array
    for (i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
    // printing the elements of first array
    printf("\nThe elements stored in the first array are: ");
    for (i=0; i<n; i++){
        printf("%d", arr1[i]);
    }
    // printing the elements copied into the second array
    printf("\n\nThe elements copied into the second array are: ");
    for (i=0; i<n; i++){
        printf("%d", arr2[i]);
    }
    return 0;
}
