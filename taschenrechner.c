#include <stdio.h>
#include <math.h>
int main() {
    float a;
    float b;
    float c;

    printf("Bitte A eingeben: "); 
    scanf("%f", &a);

    printf("Bitte B eingeben: "); 
    scanf("%f", &b);

    printf("A: %.2f\n", a);
    printf("B: %.2f\n", b);

    c = a + b;
    printf("A + B = %.2f\n", c);
    c = a - b;
    printf("A - B = %.2f\n", c);
    c = a * b;
    printf("A * B = %.2f\n", c);
    c = a / b;
    printf("A / B = %.2f\n", c);
}
