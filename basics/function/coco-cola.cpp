#include <iostream>
using namespace std;

int coco_cola(int n){
    int earn_bottles = n/3;
    int remain_bottles = n%3;
    if (earn_bottles >= 3){
        earn_bottles += coco_cola(earn_bottles);
        remain_bottles += earn_bottles%3;
    }
    if(remain_bottles %3 == 2)
        earn_bottles++;

    return earn_bottles;
    
}


int main(){
    while(1){
        int n;
        if (n == 0)
            break;
        else{
            cin >> n;
            coco_cola(n);
            int test = coco_cola(n);
            cout << test <<"\n";
        }
    }
    return 0;
}