all:
	g++ -Isrc/Include -Limage_src/lib -Lsrc/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image