#1. program 
all: main-1 main-2 main-a main-so main-so2

main-1: map.cpp main.cpp map.h
	g++ -o main-1 map.cpp main.cpp
	@echo "    Directly compile, main-1 done". // Directly compile.
	@echo 
main-2: main.cpp map.o
	g++ -o main-2 map.o main.cpp
	@echo "    Explicity *.o file compile, main-2 done"
	@echo 
main-a: libmap.a
	g++ -o main-a main.cpp libmap.a
	@echo "    Using *.a static library and link to gengerate a program,"
	@echo "    main-a done"
	@echo 

main-so: libmap.so
	g++ -o main-so main.cpp ./libmap.so	
	@echo "    Using *.so static library directly, and link to a program main-so"
	@echo "    compile libmap.so.done."
	@echo 
main-so2: libmap.so
	g++ -o main-so2 main.cpp -L . -lmap
	@echo "    let g++ search current folder automaticly for .so dynamic library file,"
	@echo "    and link to a program."
	@echo "    But on runtime, default search file_path is /usr/lib and LD_LIBRARY_PATH."
	@echo 

#2. lib
map.o:map.cpp map.h
	g++ -c map.cpp
	@echo "map.o done, compile .o file."
	@echo
libmap.a: map.o
	ar crv libmap.a map.o
	@echo "libmap.a done, compile .a static file."
	@echo
libmap.so:
	g++ -fPIC -c map.cpp
	g++ -shared -o libmap.so map.o
	@echo "    libmap.so done."
	@echo "    Compile .so dynamic library file, need .o file"
	@echo "    Please add '-fPIC' while compiling."
	@echo "    or compile dynamic library directly using:"
	@echo "        g++ -share -fPIC -o libmap.so map.cpp."

# 3. clearn
clean:
	rm -f *.o *.a *.so main-*
