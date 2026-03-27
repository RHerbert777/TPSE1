name = Code

programa: obj/main.o obj/$(name).o
	mkdir -p bin
	gcc obj/main.o obj/$(name).o -lm -o bin/programa

obj/$(name).o: $(name).c
	mkdir -p obj
	gcc -c $(name).c -o obj/$(name).o

obj/main.o: main.c
	mkdir -p obj
	gcc -c main.c -o obj/main.o

clean:
	rm -rf obj bin
