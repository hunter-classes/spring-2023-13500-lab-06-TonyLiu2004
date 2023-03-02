#include <iostream>
#include "decrypt.h"
using namespace std;
string decryptCaesar(string input, int shift){
    string ret = "";
    for(char x : input){
        if(!isalpha(x)){
            ret+=x;
        }else{
            //shift reverse
        }
    }
    return ret;
}
string decryptVigenere(string word, string key){
    string ret = "";
    int z = 0;
    for(char x : word){
        if(!isalpha(x)){
            ret+=x;
            continue;
        }
        if(z > key.length()-1){ //resets the indexing for keyword
            z = 0;
        }
        int position = tolower(key[z]) - 'a';
        z++;
        ret+=reverseChar(x,position);
    }
    return ret;
}