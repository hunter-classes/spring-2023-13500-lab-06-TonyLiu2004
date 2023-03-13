#include <iostream>
#include <vector>
#include "decrypt.h"
using namespace std;

char reverseChar(char c, int rshift){
    char ret = c;
    if(!isalpha(c)){
        return c;
    }
    for(int i = 0;i < rshift;i++){
        if(ret == 'a'){
            ret = 'z';
        }else if(ret == 'A'){
            ret = 'Z';
        }else{
            ret--;
        }
    }
    return ret;
}

string decryptCaesar(string input, int shift){
    if(shift==0){
        return input;
    }
    if(input ==""){
        return "";
    }
    string ret = "";
    for(char x : input){
        if(!isalpha(x)){
            ret+=x;
        }else{
            ret+=reverseChar(x,shift);
        }
    }
    return ret;
}
string decryptVigenere(string word, string key){
    if(key == ""){
        return word;
    }
    if(word == ""){
        return "";
    }
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

std::string solve(std::string encrypted_string){
    

}