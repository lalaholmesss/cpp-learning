#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	
	while(s.find("  ") != -1){
		s.erase(s.find("  "), 1);
	}
	if(s[0] == ' ') s.erase(0, 1);
	if(s[s.size() - 1] == ' ') s.erase(s.size() - 1, 1);
	cout << s << endl;
	
	return 0;
}
