

gcc --version
gcc add.c -c -o add.o
#nm add.o
gcc sub.c -c -o sub.o
#nm sub.o
echo ">>>>>>>> compileing main"
gcc main.c -c -o main.o
#nm main.o
echo ">>>>>>>> linking"
# shared
gcc main.o add.o sub.o -lblas -L ./include -o main_shared.out 
# static
gcc main.o add.o sub.o ./include/blas.o -o main_static.out

