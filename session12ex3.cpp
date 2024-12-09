#include <stdio.h>

long long tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * tinhGiaiThua(n - 1);
}
int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);
    if (so < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", so, tinhGiaiThua(so));
    }
    return 0;
}

