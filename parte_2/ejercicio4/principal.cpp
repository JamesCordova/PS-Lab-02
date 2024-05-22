#include "biblioteca.h"
#include <iostream>
using namespace std;
int main()
{

    Train tren(3, 100, 50);
    tren.llenarAsientos();
    cout << "Total de ventas: " << tren.calcularTotalVentas() << endl;
    return 0;
}
