#include <iostream>
using namespace std;

string toAscii(string a){
    string ret = "";
    for (char y : a){
        int t = y;
        ret+=y;
        ret+=" ";
        ret+= to_string(t) + "\n";
    }
    return ret;
}

int main(){
    string s = "Cat :3 Dog";
    cout << toAscii(s);
    string t = "Hello, World!";
    cout << toAscii(t);
}