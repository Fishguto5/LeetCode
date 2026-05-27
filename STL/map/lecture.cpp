#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;



int main(){
    int n,m;
    cin >> n >>m;
    vector<string> arr_phr;
    vector<string> dict;
    string final_phrase;
    map<string, string> mapa;
    for(int i = 0; i < m; i++){
        string w1, w2;
        cin >> w1 >> w2;

        if(w1.size() <= w2.size()) mapa[w1] = w1;
        else mapa[w1] = w2; 
    }
    
    for(int j = 0; j < n; j++){
        string w;
        cin >> w;
        cout << mapa[w];
        if (j < n - 1){
            cout << " ";
        }

    }
    cout << "\n";
    return 0;
}