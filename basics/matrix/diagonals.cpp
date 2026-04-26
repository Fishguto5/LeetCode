#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    //enter the matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    //calculate the main diagonal
    int main_diag = 0;
    int sec_diag = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j && i + j == 2){
                main_diag += matriz[i][j];
                sec_diag += matriz[i][j];
            }else if (i + j == 2){
                sec_diag += matriz[i][j];
            }else if(i == j){
                main_diag += matriz[i][j];
            }else{
                continue;
            }
        }
    }

    cout << "Diagonal principal: " << main_diag << " \n";
    cout << "Diagonal secundária: " << sec_diag << " \n";
    return 0;
}