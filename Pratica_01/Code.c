#include <stdio.h>
#include "Code.h"
#include <math.h>

//#define Delta (a, b, c) (b * b - 4 * a * c) // Macro para calcular o Delta 

double Delta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

int Raizes(double a, double b, double c, double *x1, double *x2) {
    // Validação matemática: se A for 0, não é equação do 2º grau
    if (a == 0) {
        return -1; 
    }

    double delta = Delta(a, b, c);

    // Validação matemática: se Delta for negativo, não há raízes no conjunto dos Reais
    if (delta < 0) {
        return 0; 
    }

    // Acessa os endereços de memória (*x1 e *x2) e salva os resultados direto lá
    // Formula: x = (-B +- sqrt(Delta)) / 2A
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

    return 1;
}
