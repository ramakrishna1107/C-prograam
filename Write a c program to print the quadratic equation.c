// file: quadratic_roots.c
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    double r1, r2, realp, imgp;

    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        printf("\nRoots are real and distinct.\n");
        r1 = (-b + sqrt(d)) / (2.0 * a);
        r2 = (-b - sqrt(d)) / (2.0 * a);
        printf("r1 = %.2lf and r2 = %.2lf\n", r1, r2);
    } else if (d == 0) {
        printf("\nRoots are real and equal.\n");
        r1 = -b / (2.0 * a);
        printf("r1 = r2 = %.2lf\n", r1);
    } else {
        printf("\nRoots are imaginary.\n");
        realp = -b / (2.0 * a);
        imgp = sqrt(-d) / (2.0 * a);
        printf("r1 = %.2lf + %.2lfi and r2 = %.2lf - %.2lfi\n", realp, imgp, realp, imgp);
    }

    return 0;
}
