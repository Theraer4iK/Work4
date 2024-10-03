#include <stdio.h>
#include <math.h>

int main() {
    double b, z1, z2;

    // Введення значення b
    printf("Введіть значення b: ");
    scanf("%lf", &b);

    // Обчислення z1
    z1 = sqrt(2*b + 2*sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4 + b + 2));

    // Обчислення z2
    z2 = 1 / sqrt(b + 2);

    // Виведення результатів
    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}
