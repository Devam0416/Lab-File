#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex() {
    Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void writeComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex addComplex(Complex a, Complex b) {
    Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}

Complex subComplex(Complex a, Complex b) {
    Complex result = {a.real - b.real, a.imag - b.imag};
    return result;
}

int main() {
    Complex c1 = readComplex();
    Complex c2 = readComplex();

    printf("First complex number: ");
    writeComplex(c1);
    printf("Second complex number: ");
    writeComplex(c2);

    Complex sum = addComplex(c1, c2);
    Complex diff = subComplex(c1, c2);

    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);

    return 0;
}