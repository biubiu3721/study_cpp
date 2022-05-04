/**
 * Overload:
        * Only support C++, exclude c.
        * easy to naming.
        * Compiler use param's number and dtype to call specific func.main
        * Overload do n't suport only different in return.
 * 
 */ 

int Max(double f1, double f2);
int Max(int n1, int n2);
int Max(int n1, int n2, int n3);


int main()
{
    Max(3.4, 2.5);
    Max(2, 4);
    Max(1, 2, 3);
    Max(3, 2.4) // error.
}