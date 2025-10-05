#include <stdio.h>

// ฟังก์ชันคูณสมาชิกทุกตัวใน array ด้วย 2
void doubleArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) *= 2;   // เขียนแบบ pointer แทน arr[i]
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Before: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    doubleArray(arr, size);   // เรียกใช้ฟังก์ชัน

    printf("After : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
