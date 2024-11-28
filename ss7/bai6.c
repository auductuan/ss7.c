#include <stdio.h>

int main() {
    int arr[5] = {10, 15, 20, 25, 30};

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3; 
        } else {
            arr[i] += 2; 
        }
    }
    printf("Mang sau khi thay doi la :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 
