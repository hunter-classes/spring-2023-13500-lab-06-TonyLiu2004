#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

// add your tests here
TEST_CASE("Caesar Cipher Encrypt"){
    CHECK(encryptCaesar("Way to Go!",5) == "Rovvy, Gybvn!");
    //CHECK(encryptCaesar("HELLO WORLD!",9) == "QNUUX FXAUM!" );
    //CHECK(encryptCaesar("",10) == "" );
}