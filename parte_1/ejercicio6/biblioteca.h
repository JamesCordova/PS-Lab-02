#include <bits/stdc++.h> // para cout
using namespace std; 
class Alumnos 
{ 
public: 
string NombreAlumno; //propiedad publica NombreAlumno de tipo string
int id; //propiedad publica id de tipo int
void Imprimirnombre(); //Se crea el metodo publico ImprimirNombre, no se define
void Imprimirid() //Se crea el metodo publico Imprimirid y se define
{ 
cout << "Alumno id es: " << id; //Imprime el id del alumno
} 
}; 
