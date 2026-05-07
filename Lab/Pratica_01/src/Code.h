#ifndef CODE_H
#define CODE_H

// Função focada apenas em calcular o discriminante (Delta)
// Formula: Delta = B^2 - 4AC
double Delta(double a, double b, double c);

//Função que calcula as raizes da função quadrática
// Recebe A, B, C e os ENDEREÇOS de memória de x1 e x2 (ponteiros).
// Retorna o "status" da operação (1 = sucesso, 0 = sem raiz real, -1 = erro de A).
int Raizes(double a, double b, double c, double *x1, double *x2);

#endif