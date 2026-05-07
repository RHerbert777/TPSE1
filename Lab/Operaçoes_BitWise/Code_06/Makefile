NOME = Code_06

# Definindo o compilador e as flags de aviso (boas práticas em C)
CC = gcc
CFLAGS = -Wall -g

# Regra principal: junta os arquivos .o e cria o executável final
bin/Programa: obj/$(NOME).o
	$(CC) obj/$(NOME).o -o bin/Programa

# Regra intermediária: compila o arquivo .c e transforma em objeto (.o)
obj/$(NOME).o: src/$(NOME).c
	$(CC) $(CFLAGS) -c src/$(NOME).c -o obj/$(NOME).o

# Regra de limpeza: apaga tudo para você poder recompilar do zero
clean:
	rm -f obj/*.o bin/Programa