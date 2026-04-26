#include <iostream>
using namespace std;
 
int companies = 0;

void invest(int n, int k){
    if(n <= k){
        companies++;
        return;
    }
    int left_div, right_div;
    if(n % 2 == 0){
        left_div = n/2;
        right_div = n/2;
    }else{
        left_div = n/2;
        right_div = left_div + 1;
    }
    invest(left_div,k);
    invest(right_div,k);
    
}

int main(){
    while(1){
        int n,k;
        cin >> n >> k;
        if(n == 0 && k == 0)
            break;
        if(k > n)
            cout << 1 << "\n";
        else{
            invest(n,k);
            cout << companies << "\n";
            companies = 0;
        }
    }
    return 0;
}