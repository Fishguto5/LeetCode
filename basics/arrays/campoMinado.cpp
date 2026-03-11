#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << "\n";
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << array[i] + array[i+1] << "\n";
        }else if(i == n - 1){
            cout << array[i] + array[i-1] << "\n";
        }else{
            cout << array[i - 1] + array[i] + array[i + 1] << "\n";
        } 
    }
    return 0;
}


