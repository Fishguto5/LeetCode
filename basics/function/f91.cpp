#include <iostream>
using namespace std;

int f91(int n){
    if (n <= 100)
        return f91(f91(n + 11));
    else
        return n - 10;

}

int main(){
    while (1){
        int x;  
        cin >> x;
        if (x == 0)
            break;
        int value = f91(x);
        cout << value << "\n";
    }
    return 0;
}