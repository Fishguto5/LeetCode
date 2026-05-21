#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    int i= 0;
    int j = 0;
    while(n > i){
        int value;
        cin >> value;
        if(value == 0){
            j--;
            arr[j] = 0;
        }else{
            arr[j] = value;
            j++;
        }
        if(j < 0) j = 0;
        i++;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum <<"\n";
}