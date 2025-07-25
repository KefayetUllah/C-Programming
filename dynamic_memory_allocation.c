#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); //allocate memory

    if (arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i<n; i++){
        arr[i] = i+1;
    }

    printf("Allocated Array: ");
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    free(arr); //release memory

    return 0;

}
