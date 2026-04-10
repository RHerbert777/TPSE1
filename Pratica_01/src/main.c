#include <stdio.h>
#include "Code.h"
#include <math.h>

int main() {
    double a, b, c;
    double raiz1, raiz2; // Variáveis que vão receber os resultados

    printf("--- Calculadora Bhaskara ---\n");
    
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    printf("\n--- Resultados ---\n");
    
    double delta = Delta(a, b, c);
    printf("Delta: %.2f\n", delta);
     
    // Chama a função 
    int status = Raizes(a, b, c, &raiz1, &raiz2);
    
    // Trata os resultados com base no status retornado
    if (status == -1) {
        printf("Erro: A nao pode ser zero.\n");
    } else if (status == 0) {
        printf("Aviso: Não há raízes reais.\n");
    } else {
        printf("Raiz 1 (x'): %.2f\n", raiz1);
        printf("Raiz 2 (x''): %.2f\n", raiz2);
    }

    return 0;
}
