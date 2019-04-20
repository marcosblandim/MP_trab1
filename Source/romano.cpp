// Copyright 2019 Marcos.
#include <iostream>
#include <string>
#include "romano.hpp"
using namespace std;

int main() {
  // Converter número digitado.
  int numArab;
  string numRoman;
  cout << "Digite um número em algarismos romanos:" << endl;
  cin >> numRoman;
  numArab = ConverteRomano(numRoman);
  if (numArab == -1) {
    cout << "Digitação inválida." << endl;
  } else {
    cout << "Seu equivalente em algarismos arábicos é: " << numArab << endl;
  }
  cout << "Digite qualquer tecla para sair." << endl;
  cin.get();
  cin.get();
  return 0;
}
