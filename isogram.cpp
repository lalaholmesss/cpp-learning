#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	bool flag = true;
	getline(cin, s);
	
	vector<int> h(26, 0);
	for(char c : s){
		h[c - 'a']++; 
	}
	for(int x : h){
		if(x > 1) flag = false;
	}
	if(flag) cout << "Isogram." << endl;
	else cout << "Not Isogram." << endl;

	return 0;
}
