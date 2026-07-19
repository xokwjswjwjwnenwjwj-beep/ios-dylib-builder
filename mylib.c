C




#include <stdio.h>

// Hàm này dùng để in ra một dòng chữ chào mừng
void hello_from_ios_dylib() {
    printf("Xin chào! File dylib này đã được build thành công từ GitHub Actions!\n");
}

// Hàm này dùng để cộng 2 số nguyên với nhau
int add_numbers(int a, int b) {
    return a + b;
}
