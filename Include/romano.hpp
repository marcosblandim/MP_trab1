#ifndef ROMANO_HPP
#include <iostream>
#include <string>
using namespace std;

int ConverteRomano(string numRoman) {
    int tamanho = numRoman.size();
    // ListaInt guarda os correspondentes arábicos de cada romano.
    int numArab = 0, listaInt[tamanho];
    // Preencher lista de arábicos correspondentes.
    for (int i = 0; i < tamanho; i++) {
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
    // Checar números inválidos.
    for (int i = 0; i < tamanho; i++) {
        // I ou X seguido de inválido.
        if (listaInt[i] == 1 || listaInt[i] == 10) {
            if (listaInt[i+1] == 500 || listaInt[i+1] == 1000)
                return -1;
            if (listaInt[i] == 1) {
                if (listaInt[i+1] == 50 || listaInt[i+1] == 100)
                    return -1;
            }
        }
        // Mais de 3 I, X, C ou M's seguidos.
        if (listaInt[i] == 1 || listaInt[i] == 10) {
           if (listaInt[i] == listaInt[i+1]) {
                if (listaInt[i] == listaInt[i+2]) {
                    if (listaInt[i] == listaInt[i+3]) {
                        return -1;
                }
               }
           }
        }
        if (listaInt[i] == 100 || listaInt[i] == 1000) {
           if (listaInt[i] == listaInt[i+1]) {
                if (listaInt[i] == listaInt[i+2]) {
                    if (listaInt[i] == listaInt[i+3]) {
                        return -1;
                }
               }
           }
        }
    }
    // Calcular numArab.
    for (int i = 0; i < tamanho; i++) {
        // verificar se está no último.
        if (i == tamanho - 1) {
            numArab += listaInt[i];
        } else {
            if (listaInt[i] > listaInt[i+1]) {  // Próximo menor.
                if (i == tamanho - 2) {
                    numArab += listaInt[i] + listaInt[i+1];  // Dois últimos.
                } else {
                    if (listaInt[i + 2] > listaInt[i])  // Número inválido.
                        return -1;
                    if (listaInt[i + 2] > listaInt[i + 1])  // Menor cercado.
                        numArab += listaInt[i] + listaInt[i+2] - listaInt[i+1];
                    // Maior seguido de iguais.
                    if (listaInt[i + 2] <= listaInt[i + 1])
                        numArab += listaInt[i] + listaInt[i+2] + listaInt[i+1];
                }
                i += 2;
            } else if (listaInt[i] == listaInt[i+1]) {  // Próximo igual.
                numArab += 2*listaInt[i];
                i++;
            } else if (listaInt[i] < listaInt[i+1]) {  // Próximo menor.
                numArab += listaInt[i+1] - listaInt[i];
                i++;
            }
        }
    }
    return numArab;
}
#endif
