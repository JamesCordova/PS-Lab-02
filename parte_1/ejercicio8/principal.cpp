#include "biblioteca.h" 
int main() 
{ 
    Alumnos obj1; //creacion obj1 de la clase Alumnos
    obj1.id = 7; //definimos el parametro id de obj1
    int i = 0; //creacion de variable i de tipo int y el valor 0
    while ( i < 5 ) 
    { //un bucle while que se repite si i es menor que 5
        Alumnos obj2; //creacion obj2 de la clase Alumnos
        obj2.id=i; //defnicion del parametro id de obj2
        i++; //aumento de la variable i, para que aumente de 1 en 1
    }//El alcance del obj2 finaliza aqui 
    return 0; 
}//El alcance del obj1 finaliza aqui 

