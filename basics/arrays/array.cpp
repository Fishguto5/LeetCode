#include <iostream>
using namespace std; //pega todas as funções de std e deixa disponível para uso dentro do arquivo, o único problema é que ao criar uma
// variável ou função com o mesmo nome pode haver conflitos, neste caso ao não usar o namespace é necessário utilizar std::

int main(){
    int n;
    cin >> n; //std::cin >> n (pega o input do usuário)
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << "\n";
    for (int i = n-1; i >= 0; i--){
        cout << array[i] << "\n"; //imprime pulando linha
    }
}
