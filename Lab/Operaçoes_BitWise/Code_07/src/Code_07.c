//deslocar tudo que é 1 para a direita, 101 -> 110 
#include <stdio.h>
#include <stdint.h>

//visualização de bits
int Conta_bit(int val){
    uint16_t x = 0;
    int esp = 0;

    for (int i = 31; i >= 0; i--){
        if(esp == 4){ // espaçamento a cada 4 bits
            printf(" ");
            esp = 0;
        }
        
        if(val & (1 << i)){ //empura o bit 1 para esquerda e compara com val como um scaner 0001 0010 0100 1000
            printf("1");
            x++;
            esp++;
        } else {
            printf("0");
            esp++;
        }
    }    
    printf("\n");

    return x;
}

void desl(int x){
    int j = 32;
    int esp = 0;

    for (int i = 0; i < x; i++){
        if(esp == 4){ 
            printf(" ");
            esp = 0;
        }
        
        printf("1");
        esp++;
        j--;
    }
    
    for (; j > 0; --j){
        if(esp == 4){ 
            printf(" ");
            esp = 0;
        }
        
        printf("0");
        esp++;
    }
    printf("\n");
    return ;
}

int main() {
    int val; // exemplo de valor

    scanf("%d", &val);

    int x = Conta_bit(val); 

    printf("Número de bits: %d\n", x);
    desl(x);
    
    return 0;
}