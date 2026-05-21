#include <iostream>
#include <vector>
using namespace std;

#define IND 100001

vector<int> change(vector<int> arr, vector<int> arr2, int hm){
    for(int i = 0; i < hm ;i++){
        arr[arr2[i]] = -1;
    }
    return arr;
}

void print(vector <int> arr, vector<int> arr_n, int hm){
    for (int i = 0; i < hm; i++){
        if(arr[arr_n[i]] != -1){
            cout << arr[arr_n[i]] << " ";
        }
    }
    cout << "\n";
}
int main(){
    int n;
    cin >> n;
    vector<int> idx(IND, -1);
    vector<int> arr_n;
    for (int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr_n.push_back(value);
        idx[value] = value;

    } 

    int m;
    cin >> m;
    vector<int> arr_m;
    for (int j = 0; j < m; j++){
        int value2;
        cin >> value2;
        arr_m.push_back(value2);
    }

    idx = change(idx,arr_m,m);
    print(idx, arr_n, n);
}