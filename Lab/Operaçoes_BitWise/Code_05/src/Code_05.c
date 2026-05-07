#include <stdio.h>
#include <stdint.h>

int Conta_bit(uint32_t val){
    int x = 0;
    
    for (int i = 0; i < 32; i++){
        if(val & (1 << i)){ //empura o bit 1 para esquerda e compara com val
            x++;
        }
    }
    
    return x;
}

int main(){
    uint32_t val; // Variável de 32 bits sem sinal

    scanf("%x", &val); //Lê um numero exadecimal

    Conta_bit(val);

    printf("Has %d bits set " , Conta_bit(val)); 

    return 0;
}