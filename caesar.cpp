#include <iostream>
#include "caesar.h"
using namespace std;

char shiftChar(char c, int rshift){
    char ret = c;
    if(!isalpha(c)){
        return c;
    }
    for(int i = 0;i < rshift;i++){
        if(ret == 'z'){
            ret = 'a';
        }else if(ret == 'Z'){
            ret = 'A';
        }else{
            ret+=1;
        }
    }
    return ret;
}

string encryptCaesar(string plaintext, int rshift){
    string ret = "";
    for(char x : plaintext){
        ret+=shiftChar(x,rshift);
    }
    return ret;
}