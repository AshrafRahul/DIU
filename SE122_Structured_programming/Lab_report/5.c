#include <stdio.h>
int main(){
    int arr1[100], arr2[100], arr3[100];
    int n, i, j, mm=1, ctr=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);
    for (i=0; i<n; i++){
        printf("element %d : ", i);
        scanf("%d", &arr1[i]);
    }
    for (i=0; i<n; i++){
        arr2[i] = arr1[i];
        arr3[i] = 0;
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (arr1[i] == arr2[j]){
                arr3[j] = mm;
                mm++;
            }
        }
        mm = 1;
    }
    for (i=0; i<n; i++){
        if (arr3[i] == 2){
            ctr++;
        }
    }
    printf("The total number of duplicate elements found in the array is: %d \n", ctr);
    return 0;
}
