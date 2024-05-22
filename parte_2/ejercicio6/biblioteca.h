#ifndef CANDADO_H
#define CANDADO_H

#include <iostream>
using namespace std;

class Candado {
private:
    int combinacionSeguridad[3];
    int combinacionActual[3];

public:
    // Constructor que inicializa la combinación de seguridad y la combinación actual
    Candado(int digito1, int digito2, int digito3) {
        combinacionSeguridad[0] = digito1;
        combinacionSeguridad[1] = digito2;
        combinacionSeguridad[2] = digito3;

        combinacionActual[0] = digito1;
        combinacionActual[1] = digito2;
        combinacionActual[2] = digito3;
    }

    // Método para alterar alguno de los 3 dígitos de la combinación actual
    void alterarCombinacionActual(int posicion, int nuevoValor) {
        if (posicion >= 0 && posicion < 3 && nuevoValor >= 0 && nuevoValor <= 9) {
            combinacionActual[posicion] = nuevoValor;
        } else {
            cout << "Posición o valor inválido." << endl;
        }
    }

    // Método que retorna true si la cerradura puede abrirse, false en caso contrario
    bool abrir() {
        return (combinacionActual[0] == combinacionSeguridad[0] &&
                combinacionActual[1] == combinacionSeguridad[1] &&
                combinacionActual[2] == combinacionSeguridad[2]);
    }

    // Método que retorna true si la combinación actual de otro candado coincide
    bool mismaCombinacionActual(Candado &otro) {
        return (combinacionActual[0] == otro.combinacionActual[0] &&
                combinacionActual[1] == otro.combinacionActual[1] &&
                combinacionActual[2] == otro.combinacionActual[2]);
    }

    // Método para imprimir la combinación actual (opcional, para debug)
    void imprimirCombinacionActual() {
        cout << "Combinación actual: " << combinacionActual[0] << combinacionActual[1] << combinacionActual[2] << endl;
    }
};

#endif
