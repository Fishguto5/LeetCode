#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    vector<string> names;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }

    sort(names.begin(),names.end());
    cout << names[k-1]<< "\n";

    return 0;
}