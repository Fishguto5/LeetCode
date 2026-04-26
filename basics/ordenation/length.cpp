#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <sstream>

void split_sen(string phrase){
    stringstream ss(phrase);
    string word;
    vector<string> words;
    int counter = 0;
    while(ss >> word){
        words.push_back(word);
        counter++;
    }

    // for(int i = 0; i < counter - 1; i++){
    //     for (int j = i + 1; j < counter; j++){
    //         if(words[i].length() < words[j].length()){
    //             string temp;
    //             temp = words[i];
    //             words[i] = words[j];
    //             words[j] = temp;
    //         }
    //     }
    // }

    for (int i = 1; i < counter; i++) {
    string key = words[i];
    int j = i - 1;

    while (j >= 0 && words[j].length() < key.length()) {
        words[j + 1] = words[j];
        j = j - 1;
    }
    words[j + 1] = key;
}
    for (int i = 0; i < words.size(); i++) {
    cout << words[i];
    if (i < words.size() - 1) {
        cout << " ";
    }
}
cout << endl;
}

 
int main() {
    int x;
    cin >> x;
    cin.ignore();
    for (int i = 0; i < x;i++){
        string new_phrase;
        if(getline(cin, new_phrase)){
            split_sen(new_phrase);
        }
    }
    return 0;
}