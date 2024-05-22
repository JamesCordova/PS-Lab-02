#include <iostream> //La herencia Multinivel
using namespace std;
class Vehiculo
{       // Clase base
public: // metodo publico
    Vehiculo()
    { // constructor de la clase
        cout << "Esto es un vehiculo" << endl;
    }
};
class CuatroRuedas : public Vehiculo
{                  // Primera subclase derivada de la clase vehiculo
public:            // metodo publico
    CuatroRuedas() // constructor
    {
        cout << "Objeto con cuatro ruedas son vehiculos" << endl;
    }
};
class Carro : public CuatroRuedas
{ // Sub clase derivada de la clase base CuatroRuedas
public:
    Carro() // constructor
    {
        cout << "Carro tiene 4 ruedas" << endl;
    }
};
