#include <iostream>
#include "vigenere.h"
#include "funcs.h"
using namespace std;

string encryptVigenere(string plaintext, string keyword){
    if(keyword == ""){
        return plaintext;
    }
    string ret = "";
    int z = 0;
    for(int i = 0;i < plaintext.length();i++){
        if(!isalpha(plaintext[i])){ // if not a letter, append to ret and skip the rest so keyword index doesn't update
            ret+=plaintext[i];
            continue;
        }
        if(z > keyword.length()-1){ //resets the indexing for keyword
            z = 0;
        }
        int position = tolower(keyword[z]) - 'a'; // position in alphabet
        z++;
        ret+=shiftChar(plaintext[i],position);
    }
    return ret;
}