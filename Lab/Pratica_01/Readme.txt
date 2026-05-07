Compilação estaticamente --------------

#Gera os objetos
1.gcc -c main.c tree.c 

#Gerando o executável
2.gcc main.o tree.o -static -o Meu_executavel

Compilação dinamicamente --------------
# 1. Gerar objeto 
gcc -fPIC -c tree.c

# Arquivo gerado:
tree.o

# 2. Criar a biblioteca compartilhada
gcc -shared -o libtree.so tree.o

# Arquivo gerado:
libtree.so

# 3. Compilar e linkar a main com a biblioteca
gcc main.c -L. -ltree -o Meu_executavel

#Em caso de erro de biblioteca não encontrada
gcc main.c -L. -ltree -lm -o Meu_executavel