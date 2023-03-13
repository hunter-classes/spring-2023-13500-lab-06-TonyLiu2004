#include <iostream>
#include "funcs.h"

// A helper function to shift one character by rshift
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