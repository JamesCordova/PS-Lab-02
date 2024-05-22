#include <iostream> // Programa en C++ para la herencia hibrida
using namespace std;
class Vehiculo
{ // clase base
public:
    Vehiculo()
    {
        cout << "Este es un vehiculo" << endl;
    }
};
class Faro
{ // clase base
public:
    Faro()
    {
        cout << "Faro del vehiculo\n";
    }
};
class Carro : public Vehiculo
{ // primera sub clase de herencia simple
};
class Bus : public Vehiculo, public Faro
{// segunda sub clase la cual tiene herencia hibrida
};//hereda de Vehiculo y de Faro
