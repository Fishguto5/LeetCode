#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        string expressao;
        cin >> expressao; 
        
        stack<char> p;
        bool bemFormada = true;
        
        for (char t : expressao) {
            // Se for abertura, empilha
            if (t == '(' || t == '[' || t == '{') {
                p.push(t);
            } 
            // Se for fechamento, verifica
            else if (t == ')' || t == ']' || t == '}') {
                if (p.empty()) {
                    bemFormada = false;
                    break;
                }
                
                char top = p.top();
                
                if ((t == ')' && top == '(') || 
                    (t == ']' && top == '[') || 
                    (t == '}' && top == '{')) {
                    p.pop(); 
                } else {
                    bemFormada = false; 
                    break;
                }
            }
        }
        
        if (!p.empty()) {
            bemFormada = false;
        }
        
        if (bemFormada) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }
    
    return 0;
}