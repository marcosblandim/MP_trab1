// Teste com catch. Copyright Marcos 2019 - UNB
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Teste 1", "Teste inicial.") {
    REQUIRE(ConverteRomano("I") == 1);
}

TEST_CASE("Teste 2", "Cada unidade romana.") {
    REQUIRE(ConverteRomano("V") == 5);
    REQUIRE(ConverteRomano("X") == 10);
    REQUIRE(ConverteRomano("L") == 50);
    REQUIRE(ConverteRomano("C") == 100);
    REQUIRE(ConverteRomano("D") == 500);
    REQUIRE(ConverteRomano("M") == 1000);
}

TEST_CASE("Teste 3", "Entradas inválidas.") {
    REQUIRE(ConverteRomano("v") == -1);
    REQUIRE(ConverteRomano("m") == -1);
    REQUIRE(ConverteRomano("@") == -1);
    REQUIRE(ConverteRomano("A") == -1);
}

TEST_CASE("Teste 4", "Números válidos.") {
    REQUIRE(ConverteRomano("IV") == 4);
    REQUIRE(ConverteRomano("XI") == 11);
    REQUIRE(ConverteRomano("XIX") == 19);
    REQUIRE(ConverteRomano("CXLIX") == 149);
    REQUIRE(ConverteRomano("LXXXIX") == 89);
    REQUIRE(ConverteRomano("MMM") == 3000);
}
