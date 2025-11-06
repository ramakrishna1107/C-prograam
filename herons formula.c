#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double s, area;

    printf("Enter three integer sides of the triangle (1 to 50): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < 1 || a > 50 || b < 1 || b > 50 || c < 1 || c > 50) {
        printf("Sides must be between 1 and 50.\n");
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides do not form a valid triangle.\n");
    }

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2f\n", area);

}

