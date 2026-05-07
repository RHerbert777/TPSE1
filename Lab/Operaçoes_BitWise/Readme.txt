Macro exercicio ----------------------------

10-1:
A macro não realiza operações aritimeticas, ela apenas copia e cola exatamente o que você passa para ela no exemplo
a macro fist recebe 7 last recebe 5 a all-parts recebe axatamente 7 + 5 e não 12 e por ultimo quando manda printar 
ela faz 7 + 5 * 7 + 5 o compilador interpreta como uma expresão fazendo a multiplicação primeiro ficanddo 35 + 12 = 47
e não 144.

10-4:
O erro é por conta da logica do C o compilador vai traduzir o define par isso 

if (value < 0)
    fprintf(stderr, "Fatal Error:Abort\n"); exit(8);

O compilador ler ate o ; como tem dois esse exit sai para fora do codigo encerando o programa de forma abrupta logo
para corigir deve-se colocar colchetes {} no define.

#define DIE { fprintf(stderr, "Fatal Error:Abort\n"); exit(8); }

10-5:
