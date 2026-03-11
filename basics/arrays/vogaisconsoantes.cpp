#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cin >> input;
    string vogais = "";
    string consoantes = "";
    int size = input.size();
    for (int i = 0; i < size; i++){
        if(input[i] == 97 || input[i] == 101 || input[i] == 105 || input[i] == 111 || input[i] == 117){
            vogais += input[i];
        }else{
            consoantes += input[i];
        }   
    }
    cout << "Vogais " + vogais + "\n";
    cout << "Consoantes " + consoantes + "\n";
    return 0;
}
