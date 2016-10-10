#include <iostream>
#include "vectorensg.h"

using namespace std;

int main()
{
    size_t size = 05;
    VectorENSG a(size);
    VectorENSG b(size);

    a = 10;
    b = 32;
    VectorENSG c = a + b;

    for (size_t i = 0 ; i < size ; i++)
        cout << "a[i]: " << a[i] << " - b[i]: " << b[i] << " - a[i] + b[i]: " << c[i] << endl;

    return 0;
}
