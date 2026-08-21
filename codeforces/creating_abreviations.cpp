#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string ans;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            ans += s[0]; // sum the first letter of the string
        }
        int signal = 0;
        for(int i = 0; i < m; i++){
            string abrev;
            cin >> abrev;
            for (int j = 0; j < abrev.size(); j++){
                char lett = abrev[j] + 32;
                if(ans.find(lett) == string::npos){
                    signal = 1;
                    break; // finish the loop
                } 
            }
        }

        cout << (signal == 0 ? "YES" : "NO") << endl; 
    }
    return 0;
}