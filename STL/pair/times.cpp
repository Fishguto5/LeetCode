#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<pair<int, string>> v;
    for(int i = 0; i < n; i++){
        int level;
        string nome;
        cin >> nome >> level;
        pair<int, string> estudante;
        estudante = {level, nome};
        v.push_back(estudante);
    }
    sort(v.rbegin(), v.rend());

    for(int i = 0; i < k; i++){
        vector<string> names;
        int j = 0;
        cout << "Time "<< i + 1 << "\n";
        int counter = i;
        while(counter < n){
            names.push_back(v[counter].second);
            counter += k;
            j++;
        }
        sort(names.rbegin(), names.rend());
        while(j > 0){
            cout << names[j-1] << "\n";
            j--;
        }
        cout << "\n";
        v.clear();
    }


    return 0;
}