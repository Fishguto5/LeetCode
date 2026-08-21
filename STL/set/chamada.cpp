#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n,m;
    set<string> s;
    string name;
    cin >> n >> m;
    for(int i = 0; i < n; i++ ){
        cin >> name;
        s.insert(name);
    }

    set<string>::iterator it = s.begin();
    for(int i = 1; i <m;i++){
        it++;
    }
    cout << *it << "\n";
    return 0;
}