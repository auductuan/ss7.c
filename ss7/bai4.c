#include <stdio.h>

int main() {
    int n; 
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu lon hon 0.\n");
        return 1; 
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu trong mang :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

