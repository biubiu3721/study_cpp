
#include <stdio.h>
#include <vector>
int main()
{
	std::vector <int> a;
        int *b = new int[100];
        printf("sizeof(a) %d, sizeof(b) %d \n", sizeof(a), sizeof(b));
}
