#include <stdio.h>

void nhap(float *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Ptu thu %d: ", i);
        scanf("%f", a + i);
    }
}

void in(float *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%.2f\n", *(a + i));
    }
}

int main() {
    float a[100];
    float *p = a;
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    nhap(p, n);
    printf("\nDL ban dau\n");
    in(p, n);

    return 0;
}
