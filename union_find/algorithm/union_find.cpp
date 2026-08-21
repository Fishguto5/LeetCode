#define MAXN 100100
#include <bits/stdc++.h> 
using namespace std;

int pai[MAXN];

//função find
int find(int x){
    if (pai[x] == x) return x; // if in the array the value in the position x is equal to x, this is the father
    return find(pai[x]); // else we make the recursion using the value into the pai[x]

    // Ex; We have two families: 3 -> 2 -> 1 (Family 1)
    // (family 2) 5 -> 4
    // In the first case we 2 is father of 3 and 1 is father of 2, so, in this group 1 is the major element
    // In the second case 4 is father of 5, 4 is the major element

}

void join(int x, int y){ 
    pai[find(x)] = find(y); //we're setting x as son of the major element of y family
}

//Notes
//Into the main func we need to prepair the pai array, in this case each element of the array need to be your own major

//Notes of Noic
//Vale ressaltar ainda que, na main, devemos preparar o vetor pai. Note que antes de realizarmos qualquer união, todos elementos estão sozinhos em seu próprio conjunto, 
//ou seja: todos são patriarcas de si mesmos. Por isso, antes de começarmos a usar o algoritmo, devemos percorrer o vetor pai fazendo com que cada elemento seja pai de si mesmo. 
//O algoritmo mostrado acima encontra o patriarca de um elemento e junta dois conjuntos em complexidade O(log n), onde n é o número de elementos no universo do problema.

//Assim, vamos resolver o problema Fusões. Para cada uma das k operações, vamos ler um caractere op, que indicará a operação a ser realizada (fusão ou consulta) e dois inteiros banco1 e banco2
//, que serão os identificadores dos bancos com os quais realizaremos a operação. Se op for o caractere ‘F’, devemos fundir, juntar os bancos banco1 e banco2 em um novo conjunto que conterá eles 
//e todos os que já estavam a eles fundidos, ou seja, eles e suas famílias. Logo devemos realizar o comando “join(banco1, banco2)“. Se op não for ‘F’, então ele será ‘C’ e devemos consultar se banco1 e banco2 
//estão no mesmo conjunto, ou seja se eles têm o mesmo patriarca. Para isso, vamos verificar se find(banco1)==find(banco2). Se eles forem iguais, imprimimos ‘S’, caso contrário, imprimimos ‘N’.

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) pai[i] =i; 
    char op;
    int banco1, banco2;
    for(int i=0; i <k;i++){
        cin >> op;
        if(op == 'F') join(banco1,banco2); //make the merge action
        else{ // its just a search
            if(find(banco1) == find(banco2)) cout <<'S' << endl;
            else cout << 'N' << endl;

        }
    }
    

    return 0;
}