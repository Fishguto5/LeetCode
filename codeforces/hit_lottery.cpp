#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;
    //vector<int> money(n + 1,0);
    //money[1] = 1;
    int coins = 0;
    while(n){
        coins += n/100;
        n = n%100;
        coins += n/20;
        n = n%20;
        coins += n/10;
        n = n%10;
        coins += n/5;
        n = n%5;
        coins += n/1;
        n = n%1;
    }
    // for (int i = 2; i <= n; i++){
    //     int max_coin;
    //     if(i >= 5 && i <= 9) max_coin = 5;
    //     else if(i >= 10 && i <= 19) max_coin = 10;
    //     else if(i >= 20 && i <= 99) max_coin = 20;
    //     else if(i >= 100) max_coin = 100;
    //     else max_coin = 1;
    //     money[i] = min(money[i-1] + 1, 1 + money[i - max_coin]);
    // }
    cout << coins << endl;
    return 0;
}