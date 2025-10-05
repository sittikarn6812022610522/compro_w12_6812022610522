#include <stdio.h>

// ฟังก์ชันสำหรับสลับค่า
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);   // เรียกใช้ฟังก์ชัน swap

    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;
}
