#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int goals1, goals2;
    vector<char> ph1;
    for(int i = 0; i < 16; i+=2){ //oitavas
        cin >> goals1 >> goals2;
        if(goals1 > goals2){ //quartas
            ph1.push_back('A' + i);
        }else{
            ph1.push_back('A' + i + 1);
        }
    }

    vector<char> ph2;
    int counter = 0;

    for(int i = 0; i < 8; i+=2){
        cin >> goals1 >> goals2;
        if(goals1 > goals2) ph2.push_back(ph1[counter]);
        else ph2.push_back(ph1[counter + 1]);
        counter +=2;

    }

    counter = 0;
    vector<char> ph3;
    for(int i = 0; i < 4;i+=2){
        cin >> goals1 >> goals2;
        if(goals1 > goals2){
            ph3.push_back(ph2[counter]);
        }else{
            ph3.push_back(ph2[counter + 1]);
        }
        counter+=2;
    }

    vector<char> ph4;
    counter = 0;
    for(int i = 0; i < 1; i++){
        cin >> goals1 >> goals2;
        if(goals1 > goals2) ph4.push_back(ph3[counter]);
        else ph4.push_back(ph3[counter+1]);
    }
    cout << ph4[0] <<"\n";


}