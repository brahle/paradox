CC=g++
ANTLR=java -jar /usr/local/lib/antlr-4.8-complete.jar
INCLUDE=-I/usr/local/include/antlr4-runtime
LIBS=-lantlr4-runtime -L/usr/local/lib
FLAGS=-O3 -Wall -Wextra -std=c++17 $(INCLUDE) -g -ggdb

antlr: src/antlr/ParadoxFile.g4
	cd src && $(ANTLR) -Werror -long-messages antlr/ParadoxFile.g4 -o gen -Dlanguage=Cpp -visitor

antlr.o: antlr
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileBaseListener.cpp $(LIBS) -o lib/ParadoxFileBaseListener.o
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileBaseVisitor.cpp $(LIBS) -o lib/ParadoxFileBaseVisitor.o
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileLexer.cpp $(LIBS) -o lib/ParadoxFileLexer.o
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileListener.cpp $(LIBS) -o lib/ParadoxFileListener.o
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileParser.cpp $(LIBS) -o lib/ParadoxFileParser.o
	$(CC) $(FLAGS) -c src/gen/antlr/ParadoxFileVisitor.cpp $(LIBS) -o lib/ParadoxFileVisitor.o

main:
	$(CC) $(FLAGS) src/main.cpp lib/*.o $(LIBS) -o bin/main

stations:
	$(CC) $(FLAGS) src/stations.cpp lib/*.o $(LIBS) -o bin/stations

full: antlr antlr.o main

all: full

clean:
	rm bin/* lib/*

