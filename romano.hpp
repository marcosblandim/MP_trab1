#ifndef ROMANO_HPP
#include <iostream>
#include <string>
using namespace std;

int ConverteRomano(string numRoman) {
    int tamanho = numRoman.size();
    int numArab, listaInt[tamanho];
    // ListaInt guarda os correspondentes arábicos de cada de cada romano.
    for (int i = 0; i < tamanho; i++) {  // Preenche listaInt
        switch (numRoman[i]) {
        case 'I':
            listaInt[i] = 1;
            break;
        case 'V':
            listaInt[i] = 5;
            break;
        case 'X':
            listaInt[i] = 10;
            break;
        case 'L':
            listaInt[i] = 50;
            break;
        case 'C':
            listaInt[i] = 100;
            break;
        case 'D':
            listaInt[i] = 500;
            break;
        case 'M':
            listaInt[i] = 1000;
            break;
        default:
            return -1;
        }
    }
    numArab = listaInt[0];
    return numArab;
}
#endif
