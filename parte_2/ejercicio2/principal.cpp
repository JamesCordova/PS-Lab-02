#include <iostream>
#include "biblioteca.h"
using namespace std;

int main()
{
    Tanque t;
    t.agregar(100);
    while (t.getContenido() >= 1.0)
    {
        t.sacaMitad();
        cout << t.getContenido() << endl;
    }
    return 0;
}
