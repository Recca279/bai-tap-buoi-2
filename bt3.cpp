#include <stdio.h>

int main() {
    int a;
    printf("Nhap canh a: ");
    scanf("%d", &a);

    int b;
    printf("Nhap canh b: ");
    scanf("%d", &b);

    int c;
    printf("Nhap canh c: ");
    scanf("%d", &c);
    
    if (a + b > c)
        if (a + c > b)
            if (b + c > a)
                printf("Ba canh nay co the tao thanh mot tam giac.\n");
            else
                printf("Ba canh nay KHONG tao thanh mot tam giac.\n");
        else
            printf("Ba canh nay KHONG tao thanh mot tam giac.\n");
    else
        printf("Ba canh nay KHONG tao thanh mot tam giac.\n");
}