#include "biblioteca.h" 
void Alumnos::Imprimirnombre() //Definición de Imprimirnombre usando el alcance de operador de resolución 
{ 
    cout << "Nombre es: " << NombreAlumno; 
}
int main() { 
    Alumnos obj1; //se crea un objeto de la clase alumnos
    obj1.NombreAlumno = "xyz"; //se accede a la propiedad NombreAlumno de obj1 y la define
    obj1.id = 15;//accede a la propiedad id de obj1 y la define
    obj1.Imprimirnombre(); //llamando a Imprimirnombre() 
    cout << endl; //inprime un salto de linea    
    obj1.Imprimirid(); //llamando a impirimirid() 
    cout << endl;
    return 0; 
} 
