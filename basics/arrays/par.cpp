#include <iostream>
#include <vector>
using namespace std;

int main(){
    int array[10];

    vector<int> array_par(10,102);
    vector<int> array_impar(10,101);


    for (int i = 0; i < 10; i++){
        int x;
        cin>>x;
        array[i] = x;
        if(x%2 == 0 ){
            array_par[i] = x;
        }else{
            array_impar[i] = x;
        }
    }

    for (int i = 0; i < 10; i++){
        if(array_par[i] != 102){
            cout << array_par[i] << " ";
        }else{
            continue;
        }
    }

    cout << "\n";

    for (int i = 0; i < 10; i++){
        if(array_impar[i] != 101){
            cout << array_impar[i] << " ";
        }else{
            continue;
        }
    }
    cout << "\n";

    
    return 0;
}