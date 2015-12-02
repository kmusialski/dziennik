# Project: Project1
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = main.o main.o Subject.o Utils.o
LINKOBJ  = main.o main.o Subject.o Utils.o
LIBS     = -L"D:/Dev-Cpp/MinGW32/lib" -L"D:/Dev-Cpp/MinGW32/mingw32/lib" -static-libstdc++ -static-libgcc
INCS     = -I"D:/Dev-Cpp/MinGW32/include" -I"D:/Dev-Cpp/MinGW32/mingw32/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include"
CXXINCS  = -I"D:/Dev-Cpp/MinGW32/include" -I"D:/Dev-Cpp/MinGW32/mingw32/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include/c++"
BIN      = projekt.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

Subject.o: Subject.cpp
	$(CPP) -c Subject.cpp -o Subject.o $(CXXFLAGS)

Utils.o: Utils.cpp
	$(CPP) -c Utils.cpp -o Utils.o $(CXXFLAGS)
