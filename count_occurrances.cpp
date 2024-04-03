#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	int count = 0;
	while(s1.find(s2) != -1){
		count++;
		s1.erase(s1.find(s2), 1);
		cout << s1 << endl;	
	}
	cout << count << endl;
	return 0;
}
