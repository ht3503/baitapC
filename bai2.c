#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Để sử dụng hàm time()

// Hàm kiểm tra số chính phương
int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    // Tạo số ngẫu nhiên trong phạm vi từ 10 đến 100
    int n = 10 + rand() % 91; // rand() % 91 sẽ tạo ra số từ 0 đến 90, cộng thêm 10 để nằm trong phạm vi từ 10 đến 100

    printf("So ngau nhien: %d\n", n);

    // Gọi hàm in ra các số chính phương nhỏ hơn n
    printPerfectSquares(n);

    return 0;
}
