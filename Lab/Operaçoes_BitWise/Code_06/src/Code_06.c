#include <stdio.h>
#include <stdint.h>
/*
void ver_x(int x){
    if(x == 4){
        p
    }

}
*/
int Conta_bit(uint32_t val){
    uint16_t x = 0;
    int esp = 0;

    for (int i = 31; i >= 0; i--){
        if(esp == 4){ // espaçamento a cada 4 bits
            printf(" ");
            esp = 0;
        }
        
        if(val & (1 << i)){ //empura o bit 1 para esquerda e compara com val
            printf("1");
            x++;
            esp++;
        } else {
            printf("0");
            x++;
            esp++;
        }
    }    
    printf("\n");

    return x;
}

int main(){
    uint32_t val;

    //le um exadecimal
    scanf("%x", &val);

    Conta_bit(val);


    return 0;
}