#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> v1, int n){
    int time = 0;
    for (int i = 1; i < n; i++){
        if(v1[i] - v1[i-1] < 10){
            time += v1[i] - v1[i-1];
        }else{
            time += 10;
        }
        
    }
    return time + 10;
}


int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        v.push_back(value);
    }
    int time = count(v,n);
    cout << time << "\n";
    return 0;
}