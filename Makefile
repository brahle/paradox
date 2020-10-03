CC=g++
ANTLR=java -jar /usr/local/lib/antlr-4.8-complete.jar
INCLUDE=-I/usr/local/include/antlr4-runtime
LIBS=-lantlr4-runtime -L/usr/local/lib
FLAGS=-O3 -Wall -Wextra -std=c++17 $(INCLUDE) -g -ggdb

SRC_FOLDER=src
LIB_FOLDER=lib

ANTLR_FOLDER=antlr
GEN_FOLDER_IN_SRC=gen
GEN_FOLDER=$(SRC_FOLDER)/$(GEN_FOLDER_IN_SRC)

antlr.ParadoxFile: $(SRC_FOLDER)/$(ANTLR_FOLDER)/ParadoxFile.g4
	cd $(SRC_FOLDER) && $(ANTLR) -Werror -long-messages $(ANTLR_FOLDER)/ParadoxFile.g4 -o gen -Dlanguage=Cpp -visitor
antlr.ParadoxFileBaseListener: antlr.ParadoxFile $(GEN_FOLDER)/antlr/ParadoxFileBaseListener.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileBaseListener.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileBaseListener.o
antlr.ParadoxFileBaseVisitor: antlr.ParadoxFile $(GEN_FOLDER)/antlr/ParadoxFileBaseVisitor.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileBaseVisitor.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileBaseVisitor.o
antlr.ParadoxFileLexer: antlr.ParadoxFile $(GEN_FOLDER)/antlr/ParadoxFileLexer.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileLexer.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileLexer.o
antlr.ParadoxFileListener: antlr.ParadoxFile $(GEN_FOLDER)/antlr/ParadoxFileListener.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileListener.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileListener.o
antlr.ParadoxFileParser: antlr.ParadoxFile $(GEN_FOLDER)/antlr/ParadoxFileParser.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileParser.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileParser.o
antlr.ParadoxFileVisitor:antlr.ParadoxFile  $(GEN_FOLDER)/antlr/ParadoxFileVisitor.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFileVisitor.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFileVisitor.o
antlr.ParadoxFile.o: antlr.ParadoxFileBaseListener antlr.ParadoxFileBaseVisitor antlr.ParadoxFileLexer antlr.ParadoxFileListener antlr.ParadoxFileParser antlr.ParadoxFileVisitor

main:
	$(CC) $(FLAGS) src/main.cpp lib/*.o $(LIBS) -o bin/main

stations:
	$(CC) $(FLAGS) src/stations.cpp lib/*.o $(LIBS) -o bin/stations

full: antlr.ParadoxFile antlr.ParadoxFile.o main

all: full

clean:
	rm bin/* lib/*

antlr.ParadoxFast: $(SRC_FOLDER)/$(ANTLR_FOLDER)/ParadoxFast.g4
	cd $(SRC_FOLDER) && $(ANTLR) -Werror -long-messages $(ANTLR_FOLDER)/ParadoxFast.g4 -o gen -Dlanguage=Cpp -visitor

antlr.ParadoxFastBaseListener: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastBaseListener.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastBaseListener.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastBaseListener.o

antlr.ParadoxFastBaseVisitor: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastBaseVisitor.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastBaseVisitor.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastBaseVisitor.o

antlr.ParadoxFastLexer: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastLexer.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastLexer.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastLexer.o

antlr.ParadoxFastListener: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastListener.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastListener.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastListener.o

antlr.ParadoxFastParser: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastParser.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastParser.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastParser.o

antlr.ParadoxFastVisitor: antlr.ParadoxFast $(GEN_FOLDER)/antlr/ParadoxFastVisitor.cpp
	$(CC) $(FLAGS) -c $(GEN_FOLDER)/antlr/ParadoxFastVisitor.cpp $(LIBS) -o $(LIB_FOLDER)/ParadoxFastVisitor.o

antlr.ParadoxFast.o: antlr.ParadoxFastBaseListener antlr.ParadoxFastBaseVisitor antlr.ParadoxFastLexer antlr.ParadoxFastListener antlr.ParadoxFastParser antlr.ParadoxFastVisitor

main-fast: antlr.ParadoxFast.o
	$(CC) $(FLAGS) src/main-fast.cpp lib/*.o $(LIBS) -o bin/main-fast
