#include <iostream>
#include <string>
using namespace std;

typedef struct elf{
    string name;
    int weight;
    int age;
    double height;
}elf;

void imprime(elf *array, int size){
    for(int i = 0; i < size; i++){
        cout << i + 1 << " - "<< array[i].name << endl;
    }
}

void imprime_input(elf elf){
    cout << elf.name << elf.weight << elf.height << elf.height << "\n";
}

void merge_descending(elf *array, int left, int mid, int right){
    int size_left = mid - left + 1;
    int size_right = right - mid; 
    elf *aux_left = new elf[size_left];
    elf *aux_right = new elf[size_right];
    string name1;
    string name2;

    for (int i = 0; i < size_left; i++){
        aux_left[i] = array[left + i];
        name1 = aux_left[i].name;
    }


    for (int j = 0; j < size_right; j++){
        aux_right[j] = array[mid + 1 + j]; //the expression right + mid + 1 - j, in the first time will cancel and result in right, but in the second is right -1, the third, right -3 and ...
        //elf test_name = array[right - j];
        name2 = aux_right[j].name;
    }

    int i = 0;
    int j = 0;
    int k = left;

        while(i < size_left && j < size_right){
        // string name_left = aux_left[i].name;
        // string name_right = aux_right[j].name;
        if(aux_left[i].weight == aux_right[j].weight){
            if(aux_left[i].age > aux_right[j].age){
                array[k] = aux_right[j];
                j++;
                k++;
            }else if(aux_left[i].age< aux_right[j].age){
                array[k] = aux_left[i];
                i++;
                k++;
            }else{
                if(aux_left[i].height > aux_right[j].height){
                    array[k] = aux_right[j];
                    j++;
                    k++;
                }else if(aux_left[i].height < aux_right[j].height){
                    array[k] = aux_left[i];
                    i++;
                    k++;                    
                }else{
                    if(aux_left[i].name > aux_right[j].name){
                        array[k] = aux_right[j];
                        j++;
                        k++;    
                    }else{
                        array[k] = aux_left[i];
                        i++;
                        k++;
                    }
                }
            }
        }
        else if(aux_left[i].weight > aux_right[j].weight){
            array[k] = aux_left[i];
            i++;
            k++;
        }else{
            array[k] = aux_right[j];
            j++;
            k++;
        }
    }

    while (i < size_left)
    {
        array[k] = aux_left[i];
        i++;
        k++;
    }

    while (j < size_right)
    {
        array[k] = aux_right[j];
        k++;
        j++;
    }
    
    
    delete[] aux_left;
    delete[] aux_right;

}


void mergesort(elf *array, int left, int right){
    if(left >= right)
        return;
     
    int half = (left + right)/2;
    mergesort(array,left,half);
    mergesort(array,half + 1, right);
    merge_descending(array,left,half,right);

}

int main(){
    int t;
    cin >> t;
    int n,m; 
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        elf *vector_elf = new elf[n];
        for (int j = 0; j < n; j++){
        elf elf;
        string name; 
        int weight;
        int age;
        double height;
        cin >> name >> weight >> age >> height;
        elf.name = name;
        elf.weight = weight;
        elf.age = age;
        elf.height = height;
        vector_elf[j] = elf;
        //imprime_input(elf);
        }
        cout << "CENARIO {" << i + 1<<"}";
        mergesort(vector_elf, 0, n-1);
        cout << endl;
        imprime(vector_elf, m);
        delete[] vector_elf;
    }
    return 0;
}