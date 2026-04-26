#include <iostream>

using namespace std;

int main(){
    int x;
    int matrix[3][3];
    int max = -1000000000;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] >= max){
                max = matrix[i][j];
            }
        }
    }
    cout << "Valor do máximo: "<< max << "\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] == max){
                matrix[i][j] = -1;
            }
            
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}