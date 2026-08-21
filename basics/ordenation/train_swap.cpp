#include <iostream>
using namespace std;

int order_array(int *array, int size){
    int mov = 0;
    for(int i = 0; i < size; i++){
        int init =  i; 
        int final = size - 1;
        int min = array[i];
        int index = i;
        while (final >= init){
            if(array[init] < min){
                min = array[init];
                index = init;
            }
            if(array[final] < min){
                min = array[final];
                index = final;
            }
            init++;
            final--;
    }

        if(index != i){
            int dif = index - i;
            while(dif != 0){
                int temp = array[index - 1];
                array[index - 1] = array[index];
                array[index] = temp;
                int number1 = array[index - 1];
                int number2 = array[index];
                dif--;
                mov++;
                index--;
            }
        }

    }
    return mov;

}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        int l;
        cin >> l;
        int *array = new int[l];
        for(int j = 0; j < l; j++){
            cin >> array[j];
        }
        int mov = order_array(array, l );
        cout << "Optimal train swapping takes " << mov << " swaps.\n" ;
    } 
    return 0;
}