// Copyright 2019 Marcos
#include <iostream>
#include <string>
#include "romano.hpp"
using namespace std;

int main() {
  int numArab;
  string numRoman;
  cin >> numRoman;
  numArab = convertRomano(numRoman);
  cout << numArab << endl;
  return 0;
}
