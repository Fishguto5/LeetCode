#include <iostream>
#include <set>
using namespace std;


int main(){
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i<n;i++){
        int value;
        cin >> value;
        s.insert(value);

    }

    int c;
    while(!cin.eof()){
        cin >> c;
        if(s.find(c) == s.end()){
            cout << "nao\n";
        }else{
            cout << "sim\n";
        }
    }
    return 0;
}