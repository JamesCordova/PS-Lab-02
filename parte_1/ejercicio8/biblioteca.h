//Programa en C++ para explicar los destructores 
#include <bits/stdc++.h> 
using namespace std; //ya no necesitaremos el prefijo std::
class Alumnos //clase llamada Alumnos
{ 
    public: 
    int id; //propiedad publica de tipo int
    ~Alumnos() //Definición de destructor, por ~
    { 
        cout << "Destructor llamado por id:" << id << endl; 
    } //Se libera el espacio utilizado por el objeto
}; 
