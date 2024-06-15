#include <iostream>
using namespace std;

void extraerSegmentos(int **matriz, int m)
{
    int multiplicador = 0;
    int caracteres = m / 7;

    while (multiplicador < caracteres)
    {
        // Esquina Superior Izquierda
        cout << matriz[0 + multiplicador * 7][0] << matriz[0 + multiplicador * 7][1] << endl;
        cout << matriz[1 + multiplicador * 7][0] << matriz[1 + multiplicador * 7][1] << endl;
        cout << matriz[2 + multiplicador * 7][0] << matriz[2 + multiplicador * 7][1] << endl;
        cout << endl;

        // Esquina Superior Derecha
        cout << matriz[0 + multiplicador * 7][3] << matriz[0 + multiplicador * 7][4] << endl;
        cout << matriz[1 + multiplicador * 7][3] << matriz[1 + multiplicador * 7][4] << endl;
        cout << matriz[2 + multiplicador * 7][3] << matriz[2 + multiplicador * 7][4] << endl;
        cout << endl;

        // Esquina Inferior Izquierda
        cout << matriz[4 + multiplicador * 7][0] << matriz[4 + multiplicador * 7][1] << endl;
        cout << matriz[5 + multiplicador * 7][0] << matriz[5 + multiplicador * 7][1] << endl;
        cout << matriz[6 + multiplicador * 7][0] << matriz[6 + multiplicador * 7][1] << endl;
        cout << endl;

        // Esquina Inferior Derecha
        cout << matriz[4 + multiplicador * 7][3] << matriz[4 + multiplicador * 7][4] << endl;
        cout << matriz[5 + multiplicador * 7][3] << matriz[5 + multiplicador * 7][4] << endl;
        cout << matriz[6 + multiplicador * 7][3] << matriz[6 + multiplicador * 7][4] << endl;
        cout << endl;

        multiplicador++;
    }
}

void imprimirMatriz(int **matriz)
{
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int **miMatriz = new int *[14];
    for (int i = 0; i < 14; i++)
    {
        miMatriz[i] = new int[5];
    }

    // Asignar valores a la matriz
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            miMatriz[i][j] = i + j; // Asignar un valor adecuado
        }
    }
    cout << "AQUI:" << endl;
    imprimirMatriz(miMatriz);
    extraerSegmentos(miMatriz, 14);
}

// Esquina Superior Izquierda
// (0, 0)(0, 1);
// (1, 0)(1, 1);
// (2, 0)(2, 1);

// Esquina Superior Derecha
// (0, 3)(0, 4);
// (1, 3)(1, 4);
// (2, 3)(2, 4);

// Esquina Inferior Izquierda
// (4, 0)(4, 1);
// (5, 0)(5, 1);
// (6, 0)(6, 1);

// Esquina Inferior Derecha
// (4, 3)(4, 4);
// (5, 3)(5, 4);
// (6, 3)(6, 4);

// Esquina Superior Izquierda2
// (7, 0)(7, 1);
// (8, 0)(8, 1);
// (9, 0)(9, 1);

// Esquina Superior Derecha2
// (7, 3)(7, 4);
// (8, 3)(8, 4);
// (9, 3)(9, 4);

// Esquina Inferior Izquierda2
// (11, 0)(10, 1);
// (12, 0)(12, 1);
// (13, 0)(13, 1);

// Esquina Inferior Derecha2
// (11, 3)(11, 4);
// (12, 3)(12, 4);
// (13, 3)(13, 4);