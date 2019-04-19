// Teste com catch. Copyright Marcos 2019 - UNB
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Teste 1", "Teste inicial") {
    REQUIRE(ConverteRomano("I") == 1);
}
