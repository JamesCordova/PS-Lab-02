#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Asiento
{
public:
    int probabilidad;
    bool ocupado;

    void setProbabilidad(int probabilidad)
    {
        this->probabilidad = probabilidad;
    }

    int getProbabilidad()
    {
        return probabilidad;
    }

    void setOcupado(bool ocupado)
    {
        this->ocupado = ocupado;
    }

    bool getOcupado()
    {
        return ocupado;
    }
};

class Carriage
{
private:
    Asiento asientos[40];
    bool primeraClase;

public:
    Carriage() : primeraClase(false)
    { // Constructor por defecto
        for (int i = 0; i < 40; i++)
        {
            asientos[i].setProbabilidad(40); // Default to second class
            asientos[i].setOcupado(false);
        }
    }

    Carriage(bool primera) : primeraClase(primera)
    {
        for (int i = 0; i < 40; i++)
        {
            asientos[i].setProbabilidad(primeraClase ? 10 : 40);
            asientos[i].setOcupado(false);
        }
    }

    void ocuparAsientos()
    {
        for (int i = 0; i < 40; i++)
        {
            if (rand() % 100 < asientos[i].getProbabilidad())
            {
                asientos[i].setOcupado(true);
            }
        }
    }

    void imprimirEstado()
    {
        for (int i = 0; i < 40; i++)
        {
            cout << "Asiento " << i + 1 << " - " << (asientos[i].getOcupado() ? "Ocupado" : "Vacante") << " - La probabilidad es: " << asientos[i].getProbabilidad() << endl;
        }
    }

    Asiento *getAsientos()
    {
        return asientos;
    }

    bool esPrimeraClase()
    {
        return primeraClase;
    }
};

class Train
{
private:
    int numVagones;
    int precioPrimera;
    int precioSegunda;
    Carriage *vagones;

public:
    Train(int numVagones, int precioPrimera, int precioSegunda)
        : numVagones(numVagones), precioPrimera(precioPrimera), precioSegunda(precioSegunda)
    {
        vagones = new Carriage[numVagones];
        for (int i = 0; i < numVagones; i++)
        {
            vagones[i] = Carriage(i % 2 == 0);
        }
    }

    void llenarAsientos()
    {
        for (int i = 0; i < numVagones; i++)
        {
            vagones[i].ocuparAsientos();
        }
    }

    int calcularTotalVentas()
    {
        int total = 0;
        for (int i = 0; i < numVagones; i++)
        {
            for (int j = 0; j < 40; j++)
            {
                if (vagones[i].getAsientos()[j].getOcupado())
                {
                    total += (vagones[i].esPrimeraClase()) ? precioPrimera : precioSegunda;
                }
            }
        }
        return total;
    }

    void imprimirEstadoVagon(int indice)
    {
        if (indice >= 0 && indice < numVagones)
        {
            vagones[indice].imprimirEstado();
        }
        else
        {
            cout << "Índice de vagón fuera de rango." << endl;
        }
    }

    ~Train()
    {
        delete[] vagones;
    }
};
