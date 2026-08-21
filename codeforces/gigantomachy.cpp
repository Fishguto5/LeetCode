#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n,m;
        cin >> n >> m;
        vector <int> bea (n); 
        vector <int> ver (m);
        for (int i = 0; i < n; i++){
            cin >> bea[i];
        }

        for (int i = 0; i < m; i++){
            cin >> ver[i];
        }
        int mov_bea = 0;
        for (int i = 1; i <= n - 1; i++){
            mov_bea += bea[i - 1] - bea[i] + 1;
        }
        mov_bea += bea[n-1];

        int mov_ver = 0;
        for (int i = 1; i <= m - 1; i++){
            mov_ver += ver[i - 1] - ver[i] + 1;
        }
        mov_ver += ver[m-1];

        cout << (mov_bea >= mov_ver ? "1" : "2") << endl;
        
    }
    return 0;
}
