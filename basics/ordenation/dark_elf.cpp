#include <iostream>
#include <string>
using namespace std;

typedef struct elf{
    string name;
    int weight;
    int age;
    double height;
}elf;

void merge_descending(){

}

void merge_ascending(){

}

void mergesort(elf *array, int left, int right){
    if(left >= right)
        return;
     
    int half = (left + right)/2;
    mergesort(array,left,half);
    mergesort(array,half + 1, right);
    merge_descending();

}

int main(){
    int t;
    cin >> t;
    int n,m; 
    cin >> n >> m;
    elf *vector_elf = new elf[n];
    for (int i = 0; i < n; i++){
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
        vector_elf[i] = elf;
        mergesort(vector_elf, 0, m-1);
    }
    return 0;
}