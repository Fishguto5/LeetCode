#include <iostream>
using namespace std;

void intercala(int *array, int left, int mid, int right){
    int *aux = new int[right-left+1]; //aux array
    for (int i = left; i <= mid; i++){
        aux[i-left] = array[i];
    }

    for (int i = mid + 1; i <= right; i++){
        aux[right - i + (mid - left) + 1] = array[i];
    }

    int i = 0;
    int j = right - left;

    for(int k = left; k <= right; k++){
        if(aux[i] <= aux[j]){
            array[k] = aux[i];
            i++;
        }else{
            array[k] = aux[j];
            j--;
        }
    }
    
    delete[] aux;
}

void imprime(int *array, int size){
    for (int i = 0; i < size; i++){
        if(i == size -1){
            cout << array[i] <<endl;
            return;
        }
        cout << array[i] << " ";
    }
}

void mergesort(int *array,int left, int right){
    if(left >= right)
        return;
    int meio = (left + right)/2;
    mergesort(array,left, meio);
    mergesort(array,meio + 1, right);
    intercala(array,left,meio, right);
}

int main(){
    int nc;
    cin >> nc;
    for (int i = 0; i < nc; i++){
        int n;
        cin >> n;
        int *h_array = new int[n];
        for (int j = 0; j < n; j++){
            int h;
            cin >> h;
            h_array[j] = h;
        }
        mergesort(h_array,0,n-1);
        imprime(h_array,n);
        delete[] h_array;
    }
    return 0;

}