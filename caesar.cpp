#include <iostream>
#include "caesar.h"
#include "funcs.h"
using namespace std;

string encryptCaesar(string plaintext, int rshift){
    string ret = "";
    for(char x : plaintext){
        ret+=shiftChar(x,rshift);
    }
    return ret;
}