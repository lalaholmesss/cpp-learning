#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    if(n < 2){
        cout << "This number is undefined!" << endl;
    }else{
        if(is_prime(n)) cout << "This number is prime." << endl;
        else cout << "This number is not prime." << endl;
    }

    return 0;
}
