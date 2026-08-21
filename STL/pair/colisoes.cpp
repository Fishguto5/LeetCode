#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x0,x1,y0,y1;
    
    vector<pair<pair<int,int>, pair<int,int>>> v;
    for(int i = 0; i < 2; i++){
        pair<pair<int,int>, pair<int,int>> coord;
        cin >> x0 >> y0 >> x1 >> y1;
        coord ={{x0,y0}, {x1,y1}};
        v.push_back(coord);
    }
    sort(v.begin(), v.end());
    if(v[0].second.first >= v[1].first.first && v[0].second.second >= v[1].first.second){
        cout << "1\n";
    }else{
        cout << "0\n";
    }

}