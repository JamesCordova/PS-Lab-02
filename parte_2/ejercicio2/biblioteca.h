#include <iostream>
using namespace std;
class Tanque
{
    double contenido;

public:
    static const double capacidad; 
    Tanque();                      
    double getContenido() const;
    void agregar(double cantidad); 
    void sacar(double cantidad);   
    void sacaMitad();
};
const double Tanque::capacidad = 5000.0;
Tanque::Tanque() : contenido(0) {}
double Tanque::getContenido() const
{
    return contenido;
}
void Tanque::agregar(double cantidad)
{
    if (contenido + cantidad <= capacidad)
        contenido += cantidad;
    else
        cout << "No superar la capacidad" << endl;
}
void Tanque::sacar(double cantidad)
{
    if (contenido - cantidad >= 0)
        contenido -= cantidad;
    else
        cout << "No tengo esa cantidad" << endl;
}
void Tanque::sacaMitad()
{
    if (contenido > 0)
        sacar(contenido / 2);
    else
        cout << "Estoy vacio" << endl;
}
