#include <iostream>
using namespace std;

int main(){
    int x;
    int matrix[3][3];
    //recieve the matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> x;
            matrix[i][j] = x;
        }
    }

    //sum the column
    int sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum += matrix[j][i];
        }
        cout << "Coluna " << i << " " << sum << " \n";
        sum = 0;
    }
    return 0;
}