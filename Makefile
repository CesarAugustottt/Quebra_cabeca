all:
	mkdir -p bin
	gcc -I src src/*.c -o bin/jogo

run: all
	./bin/jogo

clean:
	rm -rf bin