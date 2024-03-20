#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int is_square_number(int num) {
    int sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void count_and_print_square_numbers(int n) {
    printf("Các số chính phương nhỏ hơn %d là:\n", n);
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (is_square_number(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTổng cộng có %d số chính phương nhỏ hơn %d.\n", count, n);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    count_and_print_square_numbers(n);
    return 0;
}