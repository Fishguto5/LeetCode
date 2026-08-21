#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int comp, n;
    cin >> comp >>n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++){
        pair <int, int> ice;
        int min, max;
        cin >> min >> max;
        ice = {min, max};
        v.push_back(ice);
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n;i++){
        int min_num = v[i].first;
        int max_num = v[i].second;
        for(int j = i + 1; j < n; j++){
            if(max_num >= v[j].first && max_num <= v[j].second){
                max_num = v[j].second;
            }
        }
        if(max_num == v[n-1].second){
            cout << min_num << " " << max_num << "\n";
            break; 
        }
        cout << min_num << " "<< max_num << "\n";
    }
}