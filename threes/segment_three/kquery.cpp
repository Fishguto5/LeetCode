#include <bits/stdc++.h>
using namespace std;

int counter = 0;

int build(int node, int l, int r, vector<int> seg, vector<int> arr){
    if(l == r) return seg[node] = arr[l];
    int mid = (l+r)/2;
    build(2*node, l, mid, seg, arr);
    build(2*node + 1, mid + 1,r, seg, arr);
    return seg[node];
}

int check(int node, int l, int r, int k, int l0, int r0 ,vector<int> seg){
    if(l0 <= l && r0>=r){
        if(seg[node] > k){
            return counter++;
        }}

        else if(l > r0 || r < l0) return 0;
        else{
            int mid = (l + r)/2;
            return check(2*node,l, mid, k, l0, r0, seg) + check(2*node,mid + 1, r, k, l0, r0, seg);
        }
    return counter; 
}

int main(){
    int n;
    cin >> n;
    vector<int> arr (n);
    vector<int> seg (4*n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    build(1,1,n,seg, arr);
    int q;
    cin >> q;
    while(q--){
        int i,j,k;
        cin >> i >> j >> k;
        int value = check(1,1,n,k,i,j,seg);
        cout << value << endl;
    }

    return 0;
}