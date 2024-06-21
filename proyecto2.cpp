#include <iostream>
using namespace std;

string *extenderArray(string *array, int cantidadElementos)
{
    string *newArray = new string[cantidadElementos + 35];
    for (int i = 0; i < cantidadElementos; i++)
    {
        newArray[i] = array[i];
    }
    delete[] array;
    return newArray;
}

void extraerSegmentos(string arr[], string segmentos[], int caracteres)
{
    int multiplicador = 0;
    int contadorSegmento = 0;
    while (multiplicador < caracteres)
    {
        // Esquina Superior Izquierda
        segmentos[contadorSegmento] =
            string(1, arr[0 + multiplicador * 7][0]) +
            string(1, arr[0 + multiplicador * 7][1]) +
            string(1, arr[1 + multiplicador * 7][0]) +
            string(1, arr[1 + multiplicador * 7][1]) +
            string(1, arr[2 + multiplicador * 7][0]) +
            string(1, arr[2 + multiplicador * 7][1]);
        contadorSegmento++;

        // Esquina Superior Derecha
        segmentos[contadorSegmento] =
            string(1, arr[0 + multiplicador * 7][3]) +
            string(1, arr[0 + multiplicador * 7][4]) +
            string(1, arr[1 + multiplicador * 7][3]) +
            string(1, arr[1 + multiplicador * 7][4]) +
            string(1, arr[2 + multiplicador * 7][3]) +
            string(1, arr[2 + multiplicador * 7][4]);
        contadorSegmento++;

        // Esquina Inferior Izquierda
        segmentos[contadorSegmento] =
            string(1, arr[4 + multiplicador * 7][0]) +
            string(1, arr[4 + multiplicador * 7][1]) +
            string(1, arr[5 + multiplicador * 7][0]) +
            string(1, arr[5 + multiplicador * 7][1]) +
            string(1, arr[6 + multiplicador * 7][0]) +
            string(1, arr[6 + multiplicador * 7][1]);
        contadorSegmento++;

        // Esquina Inferior Derecha
        segmentos[contadorSegmento] =
            string(1, arr[4 + multiplicador * 7][3]) +
            string(1, arr[4 + multiplicador * 7][4]) +
            string(1, arr[5 + multiplicador * 7][3]) +
            string(1, arr[5 + multiplicador * 7][4]) +
            string(1, arr[6 + multiplicador * 7][3]) +
            string(1, arr[6 + multiplicador * 7][4]);
        contadorSegmento++;
        multiplicador++;
    }
}

void extraerCruz(string arr[], string cruces[], int caracteres)
{
    int multiplicador = 0;
    int contadorCruces = 0;
    while (multiplicador < caracteres)
    {
        // Vertical
        cruces[contadorCruces] =
            string(1, arr[0 + multiplicador * 7][2]) +
            string(1, arr[1 + multiplicador * 7][2]) +
            string(1, arr[2 + multiplicador * 7][2]) +
            string(1, arr[3 + multiplicador * 7][2]) +
            string(1, arr[4 + multiplicador * 7][2]) +
            string(1, arr[5 + multiplicador * 7][2]) +
            string(1, arr[6 + multiplicador * 7][2]) +
            // Horizontal
            string(1, arr[3 + multiplicador * 7][0]) +
            string(1, arr[3 + multiplicador * 7][1]) +
            string(1, arr[3 + multiplicador * 7][3]) +
            string(1, arr[3 + multiplicador * 7][4]);

        contadorCruces++;
        multiplicador++;
    }
}

int main()
{
    int cantidadElementos = 35;
    string *paquetes = new string[cantidadElementos];
    int contador = 0;
    string filaEntrada;
    while (true)
    {
        cin >> filaEntrada;
        if (filaEntrada == "ENJOY")
            break;
        if (contador >= cantidadElementos)
        {
            paquetes = extenderArray(paquetes, cantidadElementos);
            cantidadElementos += 35;
        }
        paquetes[contador] = filaEntrada;
        contador++;
    }

    for (int i = 0; i < contador; i++)
    {
        cout << paquetes[i] << " ";
    }
    cout << endl;

    // Arreglos cruces y segmentos
    int caracteres = contador / 7;
    string *cruces = new string[caracteres];
    string *segmentos = new string[caracteres * 4];
    extraerCruz(paquetes, cruces, caracteres);
    extraerSegmentos(paquetes, segmentos, caracteres);
    for (int i = 0; i < caracteres; i++)
    {
        cout << cruces[i] << endl;
    }
    for (int i = 0; i < caracteres * 4; i++)
    {
        cout << segmentos[i] << endl;
    }
}