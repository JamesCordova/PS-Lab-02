#include <iostream> 
using namespace std; 
class Vehiculo{ //clase base 
public: //parametros publicos
Vehiculo() //constructor de la clase base sin parametros
{ 
cout << "Este es un vehiculo" << endl;//una simple impresion
} 
}; 
class Carro : public Vehiculo{ 
//La sub clase derivada de la clase Vehiculo
};
