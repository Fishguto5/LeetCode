#include <iostream>
using namespace std;
void upd(int *arr, int size, int k, int p){
    while(k <= size){
        arr[k] += p;
        k += k & (-k);
    }
}

int sum(int *arr, int k){
    int res = 0;
    while (k >= 1){
        res += arr[k];
        k -= k&(-k);
 }
 return res;
 
}

int *buildTree(int *arr, int size){
    int *bittree = new int [size + 1]{0};
    for (int i = 1; i <= size; i++){
        upd(bittree, size, i, arr[i]);
    }
    return bittree;
}


int main(){
    int n,q;
    cin >> n >> q;
    int * arr = new int [n + 1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int *tree = buildTree(arr, n);
    for (int i = 0; i < q; i++){
        int com;
        cin >> com;
        if (com == 1){
            int idx;
            cin >> idx;
            int res = sum(tree, idx);
            cout << res << "\n";
        }else{
            int floor, value;
            cin >> floor >> value;
            int dif = value - arr[floor];
            arr[floor] = value;
            upd(tree, n, floor, dif);
        }
    }
    delete [] arr;
    delete [] tree;
    return 0;
}