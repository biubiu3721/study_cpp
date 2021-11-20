
echo "compile lib"
g++ -c map.cpp -o libmap.a
echo "comlile exe"
g++ -o main test_main.cpp libmap.a
echo "run"
./main.exe
