#include <iostream>
#include "multiply.h"


using namespace std;

double multiply(int x, int y)
{
    return x * y;
}

int main()
{
    cout << "The product of 3 and 4 is:" << endl;
    std::cout << multiply(3,4);
    return 0;
}
