#include <stdio.h>
#include <math.h>
int main() {

    float a;
    printf("Nhap a: ");
    scanf("%f", &a);

    float b;
    printf("Nhap b: ");
    scanf("%f", &b);

    float c;
    printf("Nhap c: ");
    scanf("%f", &c);

    float delta, x1, x2;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem.\n");
            else
                printf("Phuong trinh vo nghiem.\n");
        } else {
            x1 = -c / b;
            printf("Phuong trinh co mot nghiem: x = %.2f\n", x1);
        }
    } else {
        
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
}
