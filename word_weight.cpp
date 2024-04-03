#include <bits/stdc++.h>

using namespace std;

int weight_of_word(string word){
    int w = 0;
    for(char c: word){
        w += c - 64;
    }
    return w;
}

int main(){
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
    }

    cout << "Weight of my word: " << weight_of_word(s) << endl;
}
