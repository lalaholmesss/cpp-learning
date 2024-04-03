#include<bits/stdc++.h>

using namespace std;

int bin_to_dec(vector<int> &vec){
    int result = 0;
    int power = 1;
    for(int j = vec.size() - 1; j >=0; j--){
        result += vec[j] * power;
        power *= 2;
    }
    return result;
}

int main(){
	srand(time(0));
	int n, len;
	cin >> n >> len;
	vector<vector<int>> nums(n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < len; j++){
			nums[i].push_back(rand() % 2);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < len; j++){
		 	cout << nums[i][j];
		}
		cout << " --> " << bin_to_dec(nums[i]) << endl;
	}
	return 0;
}
