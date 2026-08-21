#include <iostream>
using namespace std;

void upd(long long *tree, long long size, long long idx, long long val){
    while (idx <= size){
        tree[idx] += val;
        idx += idx&(-idx);
    }
}
long long sum(long long *tree, long long idx){
    long long res = 0;
    while (idx >= 1)
    {
        res += tree[idx];
        idx -= idx&(-idx);
    }
    return res;
}

long long *tree(long long *arr, long long size){
    long long *tree = new long long [size + 1]{0};
    for (int i = 1; i <= size; i++){
        upd(tree, size,i, arr[i]);
    }
    return tree;
}

int main(){
    int n,q;
    cin >> n >> q;
    long long *arr = new long long [n + 1];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    long long *bit = tree(arr, n);
    for (int i = 0; i < q; i++){
        long long comd;
        cin >> comd;
        if (comd == 1){
            long long k, u;
            cin >> k >> u;
            long long dif = u - arr[k];
            arr[k] = u;
            upd(bit, n, k, dif);
        }else{
            long long a, b;
            cin >> a >> b;
            long long res1 = sum(bit, a - 1);
            long long res2 = sum(bit, b);
            long long final = res2 - res1;
            cout << final << endl;
        }
    }
    return 0;
}