#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    int do_dai = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < do_dai; i++) {
        printf("%d\n", arr[i]);
    }
    printf("Do dai cua mang : %d\n",

