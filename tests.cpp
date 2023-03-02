#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here
TEST_CASE("Caesar Cipher Encrypt"){
    CHECK(encryptCaesar("Way to Go!",5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("HELLO WORLD!",9) == "QNUUX FXAUM!" );
    CHECK(encryptCaesar("",10) == "" );
}

TEST_CASE("Vigenere Cipher Encrypt"){
    CHECK(encryptVigenere("Hello, World!","CaKe") == "Jevpq, Wyvnd!");
    CHECK(encryptCaesar("","") == "");
}