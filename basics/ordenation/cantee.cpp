#include <iostream>
using namespace std;

int* order_array(int *array, int m){
    int counter = 0;
    int flag = 0;
    for(int i = 0; i < m - 1; i++){
        for (int j = i + 1; j < m; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
            
    }
    
    return array;
}

int count_changes(int *order_array, int *org_array, int m){
    int counter = 0;
    for(int k = 0; k < m; k++){
        if(order_array[k] != org_array[k])
            counter++;
    }
    return m - counter;
}

void imprime (int *vetor, int m){
    for (int i = 0; i < m; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        int *array = new int[m];
        int *ordered_array = new int[m];
        for (int j = 0; j < m; j++){
            int p;
            cin >> p;
            array[j] = p;
            ordered_array[j] = p;
        } 
        order_array(ordered_array,m);
        int changes = count_changes(ordered_array, array, m);
        cout << changes << endl;
    }
    return 0;
}