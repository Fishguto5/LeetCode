#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    int array[n+1];
    int f = n;
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        if(array[x] == x){
            continue;
        }else{
            f = f - 1;
            array[x] = x;
        }
    }

    cout << f << "\n";    
}