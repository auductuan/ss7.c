#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 4, 7, 8};
    int so_chan = 0;

    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            so_chan = 1; 
        }
    }

    if (!so_chan) {
        printf("Mang kh chua so chan.\n");
    } else {
        printf("\n");
    }

    return 0;
}

