#include <iostream>
using namespace std;
const string dictionary[77][6] =
    {
        {"0", "10000110101", "011010", "100111", "111001", "010110"},
        {"1", "11111100100", "000100", "000000", "000001", "000010"},
        {"2", "10010100010", "011000", "100101", "000111", "000011"},
        {"3", "10100100010", "110000", "111000", "001001", "010110"},
        {"4", "01010010010", "000001", "101010", "110000", "111010"},
        {"5", "10100100001", "111011", "110010", "001001", "010110"},
        {"6", "10000111110", "000110", "100000", "101001", "010110"},
        {"7", "10000000100", "110000", "110110", "010101", "000000"},
        {"8", "10000101110", "011010", "100101", "101001", "010110"},
        {"9", "10000101111", "011010", "100101", "000001", "011000"},
        {":", "01111000000", "000101", "000000", "010100", "000000"},
        {";", "01111000000", "000101", "000000", "010001", "000000"},
        {"<", "01001010000", "000001", "100000", "010000", "000010"},
        {"=", "00110000000", "000011", "000011", "110000", "110000"},
        {">", "01001000001", "010000", "000010", "000001", "100000"},
        {"?", "10010100010", "011000", "100101", "000000", "000000"},
        {"@", "10011101101", "011000", "100101", "101001", "010110"},
        {"A", "10010010001", "011010", "100101", "111010", "110101"},
        {"B", "10000111110", "111010", "100101", "101011", "010110"},
        {"C", "10000110000", "011010", "100100", "101001", "000110"},
        {"D", "10000110001", "111010", "001001", "101011", "011000"},
        {"E", "10000111110", "111010", "110000", "101011", "000011"},
        {"F", "10000011110", "111010", "110000", "101010", "000000"},
        {"G", "10000110111", "011010", "100100", "101001", "010111"},
        {"H", "00000011111", "101010", "010101", "101010", "010101"},
        {"I", "11111100100", "010000", "100000", "000001", "000010"},
        {"J", "10000100010", "000000", "111010", "001001", "101000"},
        {"K", "00110011000", "101010", "011000", "101010", "001001"},
        {"L", "00000110000", "101010", "000000", "101011", "000011"},
        {"M", "00100010101", "101110", "011101", "101010", "010101"},
        {"N", "00000010101", "101011", "010101", "101010", "110101"},
        {"O", "10000110001", "011010", "100101", "101001", "010110"},
        {"P", "10000011110", "111010", "100101", "101010", "000000"},
        {"Q", "10010110001", "011010", "100101", "101001", "011001"},
        {"R", "10010011110", "111010", "100101", "101010", "001001"},
        {"S", "10000101110", "011010", "110000", "000011", "010110"},
        {"T", "11111100100", "110000", "110000", "000000", "000000"},
        {"U", "00000110001", "101010", "010101", "101001", "010110"},
        {"V", "00000110001", "101010", "010101", "100100", "011000"},
        {"W", "00011010101", "101010", "010101", "101001", "010110"},
        {"X", "00000000100", "101001", "010110", "011010", "100101"},
        {"Y", "00011101010", "101010", "010101", "000000", "000000"},
        {"Z", "10000100100", "110000", "110110", "011011", "000011"},
        {"[", "10000101000", "010101", "100000", "010101", "000010"},
        {"/", "00000000100", "001001", "000000", "000000", "100100"},
        {"]", "10000100010", "010000", "101010", "000001", "101010"},
        {"_", "00000100000", "000000", "000000", "000011", "000011"},
        {"a", "00110100001", "000001", "000010", "011001", "110111"},
        {"b", "00000111110", "101010", "000000", "101011", "010110"},
        {"c", "00100110000", "000001", "000011", "101001", "000011"},
        {"d", "00000101111", "000000", "010101", "101001", "010111"},
        {"e", "00110110001", "000001", "000010", "111001", "110011"},
        {"f", "01111101110", "000000", "100100", "000000", "000000"},
        {"g", "00110110001", "000001", "000011", "010011", "110110"},
        {"h", "00000011110", "101010", "000000", "101010", "010101"},
        {"i", "01011100100", "000000", "000000", "000000", "000000"},
        {"j", "00000100010", "000000", "100010", "001001", "101000"},
        {"k", "00010001010", "010101", "000001", "010101", "001001"},
        {"l", "11111100100", "010000", "000000", "000001", "000010"},
        {"m", "00011010101", "000011", "000011", "101010", "010101"},
        {"n", "00100011001", "000010", "000010", "101010", "010101"},
        {"o", "00100110001", "000001", "000010", "101001", "010110"},
        {"p", "00110010001", "000011", "000010", "111010", "100000"},
        {"q", "00110010001", "000001", "000011", "010000", "110101"},
        {"r", "00100011001", "000010", "000010", "101010", "000000"},
        {"s", "00110110000", "000001", "000011", "010011", "100110"},
        {"t", "11111000100", "000011", "000011", "000000", "000110"},
        {"u", "00000110001", "000010", "000001", "101001", "010110"},
        {"v", "00000110001", "000010", "000001", "100100", "011000"},
        {"w", "00011010001", "000010", "000001", "101001", "010110"},
        {"x", "00010001010", "000010", "000001", "000110", "001001"},
        {"y", "00011001010", "000010", "000001", "000001", "000000"},
        {"z", "00110100010", "000011", "000011", "000111", "000011"},
        {"{", "10000110000", "000101", "100000", "010100", "000010"},
        {"|", "11111100100", "000000", "000000", "000000", "000000"},
        {"}", "10000100001", "010000", "001010", "000001", "101000"},
        {"█", "10000110001", "111010", "110101", "101011", "010111"},
};
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
            string(1, arr[4 + multiplicador * 7][2]) +
            string(1, arr[5 + multiplicador * 7][2]) +
            string(1, arr[6 + multiplicador * 7][2]) +
            // Horizontal
            string(1, arr[3 + multiplicador * 7][0]) +
            string(1, arr[3 + multiplicador * 7][1]) +
            string(1, arr[3 + multiplicador * 7][2]) +
            string(1, arr[3 + multiplicador * 7][3]) +
            string(1, arr[3 + multiplicador * 7][4]);

        contadorCruces++;
        multiplicador++;
    }
}

// Function to check if a given cross and segments match any dictionary entry
bool matchPattern(string cross, string segments[4], string &result)
{
    for (int i = 0; i < 77; i++)
    {
        if (dictionary[i][1] == cross &&
            dictionary[i][2] == segments[0] &&
            dictionary[i][3] == segments[1] &&
            dictionary[i][4] == segments[2] &&
            dictionary[i][5] == segments[3])
        {
            result = dictionary[i][0];
            return true;
        }
    }
    return false;
}

// Backtracking function to find all possible words
void backtrack(string cruces[], string segmentos[], int index, int caracteres, string currentWord, string *&results, int &resultCount, int &resultCapacity)
{
    if (index == caracteres)
    {
        if (resultCount >= resultCapacity)
        {
            resultCapacity += 10;
            string *newResults = new string[resultCapacity];
            for (int i = 0; i < resultCount; i++)
            {
                newResults[i] = results[i];
            }
            delete[] results;
            results = newResults;
        }
        results[resultCount++] = currentWord;
        return;
    }

    backtrack(cruces, segmentos, 0, caracteres, "", results, resultCount, resultCapacity);

    for (int i = 0; i < resultCount; i++)
    {
        cout << results[i] << endl;
    }
}

bool comparar(string cruz, string segmento1, string segmento2, string segmento3, string segmento4)
{
    for (int i = 0; i < 77; i++)
    {
        if (dictionary[i][1] == cruz && dictionary[i][2] == segmento1 &&
            dictionary[i][3] == segmento2 && dictionary[i][4] == segmento3 &&
            dictionary[i][5] == segmento4)
        {
            return true;
        }
    }
    return false;
}

void backtracking(string cruces[], string segmentos[], string palabra, int index, int caracteres)
{
    if (index == caracteres)
    {
        cout << palabra << endl;
        return;
    }

    for (int i = 0; i < 4 * caracteres; i += 4)
    {
        if (comparar(cruces[index], segmentos[i], segmentos[i + 1], segmentos[i + 2], segmentos[i + 3]))
        {
            for (int j = 0; j < 77; j++)
            {
                if (dictionary[j][1] == cruces[index] && dictionary[j][2] == segmentos[i] &&
                    dictionary[j][3] == segmentos[i + 1] && dictionary[j][4] == segmentos[i + 2] &&
                    dictionary[j][5] == segmentos[i + 3])
                {
                    backtracking(cruces, segmentos, palabra + dictionary[j][0], index + 1, caracteres);
                }
            }
        }
    }
}

int main()
{
    // Entradas
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

    // Arreglos cruces y segmentos
    int caracteres = contador / 7;
    string *cruces = new string[caracteres];
    string *segmentos = new string[caracteres * 4];
    bool *segmentosDisponibles = new bool[caracteres * 4];
    for (int i = 0; i < caracteres * 4; i++)
    {
        segmentosDisponibles[i] = true;
    }
    extraerCruz(paquetes, cruces, caracteres);
    extraerSegmentos(paquetes, segmentos, caracteres);
    delete[] paquetes;
    backtracking(cruces, segmentos, "", 0, caracteres);
    return 0;
}