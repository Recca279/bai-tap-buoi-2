#include <stdio.h>

int main() {
    int so_kwh;
    int tien_dien = 0;

    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &so_kwh);

    if (so_kwh <= 50) {
        tien_dien = so_kwh * 1678;
    } else if (so_kwh <= 100) {
        tien_dien = 50 * 1678 + (so_kwh - 50) * 1734;
    } else if (so_kwh <= 200) {
        tien_dien = 50 * 1678 + 50 * 1734 + (so_kwh - 100) * 2014;
    } else {
        tien_dien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (so_kwh - 200) * 2536;
    }
    printf("Tien dien phai tra la: %d dong\n", tien_dien);
}