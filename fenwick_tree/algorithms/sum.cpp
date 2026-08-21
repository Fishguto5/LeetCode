#include <iostream>
#include <vector>
using namespace std;

int sum(int idx, int *bit_arr){
    int res = 0;
    idx += 1;
    while (idx >= 1){
        res += bit_arr[idx];
        idx -= idx&(-idx);
        cout << "O valor de idx é: " << idx << endl;
    }
    return res;
}

void update(int *bit_arr, int size, int idx, int value){
    idx += 1;
    while (idx <= size){
        bit_arr[idx] += value;
        idx += idx & (-idx);
    }
}

int *buildBitTree(int *arr, int size){
    int *BITree = new int[size + 1]{0};
    for (int i = 0; i < size; i++){
        update(BITree, size, i, arr[i]);
    }
    return BITree;
}



int main(){
    int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(freq) / sizeof(freq[0]); //size of the array
    // cout << "O valor de n é: " << n << endl;
    // cout << "O valor de sizeof de freq é: " << sizeof(freq) << endl; 
    int *BITree = buildBitTree(freq,n);
    cout << "Built the Tree" << endl;
    int n_sum = sum(n - 1, BITree);
    cout << "The sum of the BIT array is: " << n_sum <<  endl;
    int delta = 5;
    update(BITree,n,5,delta);
    n_sum = sum(n - 1, BITree);
    cout << "The sum of the BIT array after the update is: " << n_sum << endl;
    delete[] BITree;
    return 0;
}