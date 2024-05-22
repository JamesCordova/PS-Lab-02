#include "biblioteca.h"

int main()
{
    // Crear dos objetos de tipo Candado
    Candado c1(1, 2, 3);
    Candado c2(4, 5, 6);

    // Alterar uno de los tres dígitos de la combinación actual de c1
    c1.alterarCombinacionActual(1, 5); // Cambiar el segundo dígito de c1 a 5

    // Mostrar si c2 puede abrirse con su combinación actual
    if (c2.abrir())
    {
        cout << "El candado c2 puede abrirse con su combinación actual." << endl;
    }
    else
    {
        cout << "El candado c2 no puede abrirse con su combinación actual." << endl;
    }

    // Mostrar si c1 y c2 tienen las mismas combinaciones actuales
    if (c1.mismaCombinacionActual(c2))
    {
        cout << "c1 y c2 tienen las mismas combinaciones actuales." << endl;
    }
    else
    {
        cout << "c1 y c2 no tienen las mismas combinaciones actuales." << endl;
    }

    return 0;
}
