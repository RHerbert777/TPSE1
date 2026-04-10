all: app

#CC= arm-none-eabi-gcc
CC= gcc

app: main func
	$(CC) obj/main.o obj/func.o -lc -o bin/app
	cp bin/app ~/Downloads

func: src/func.c
	$(CC) -c src/func.c -Iinc -o obj/func.o

main: src/main.c
	$(CC) -c src/main.c -Iinc -o obj/main.o

clean:
	rm obj/*.o bin/app
