#include <iostream>
using namespace std;


void threeT_problem(int n){
    cout << n << " ";
    if (n == 1)
        return;

    if (n % 2 != 0) 
        n = 3*n + 1;
    else
        n = n/2;
    threeT_problem(n);
}

int main(){
    int x;
    cin >> x;
    threeT_problem(x);
    cout << "\n";
    return 0;
}