#include <stdio.h>

int main() {
    int x = 10;       // กำหนดค่าเริ่มต้น
    int *ptr = &x;    // ให้ ptr ชี้ไปที่ x

    printf("Before: x = %d\n", *ptr);   // แสดงค่าก่อนเปลี่ยน
    *ptr = 20;                          // เปลี่ยนค่าผ่าน pointer
    printf("After : x = %d\n", x);      // แสดงค่าหลังเปลี่ยน

    return 0;
}
