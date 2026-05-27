#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
    int state = 1;
    map<string, int> mapa;
    vector<pair<string, int>> arr;
    int counter_pos = 0;
    while(state){
        int n;
        cin >> n;
        if(n == 0) state = 0;
        for(int i = 0; i < n;i++){
            string name;
            string inst; 
            cin >> name >> inst;
            if(mapa.find(inst) == mapa.end()) {
                pair<string, int> data;
                data.first = inst;
                data.second = 1;
                arr.push_back(data);
                mapa[inst] = counter_pos;
                counter_pos++;
            }else{  
                int pos = mapa[inst];
                arr[pos].second++;
            }
        }
    }

    for(pair <string, int> p : arr){
        cout << p.first << " " << p.second  << "\n";
    }
    return 0;
}