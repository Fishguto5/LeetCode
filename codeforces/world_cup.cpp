#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int n_all = 1;
    int occu = 0;
    int pos = 0;
    while(n_all){
        occu += 1;
        if(arr[pos] - occu < 0) break;
        if(pos == n-1) pos = 0;
        else pos += 1;
    }

    cout << pos + 1 << endl;
    return 0;
}