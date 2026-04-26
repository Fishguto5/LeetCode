#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> array(12,0);
    vector<int> array_indice(12,0);
    

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        array[x]++;
    }
    cout << "\n";

    // for (int i = 1; i <= 12; i++){
    //     cout << array[i] << " ";
    // }


    int max_value = 0;
    int indice;

    for (int i = 1; i <= 12; i++){
        if(array[i] > max_value){
            max_value = array[i];
            indice = i ;
        }else{
            continue;
        }
    
    cout << indice << "\n";
    
    }

    


    return 0;
}