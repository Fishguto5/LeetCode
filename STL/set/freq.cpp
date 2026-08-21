#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    set<int> s;
    cin >> n;
    for(int i = 0; i < n;i++){
        int value;
        cin >> value;
        s.insert(value);
    }

    set<int>::iterator it;
    int conter = 0;
    for(it=s.begin(); it != s.end(); it++){
        conter++;
    }

    cout << conter << "\n";

    return 0;
}