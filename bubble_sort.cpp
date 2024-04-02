#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++) cin >> nums[i];
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(nums[j] > nums[j + 1]){
				swap(nums[j], nums[j + 1]);
			}
		}	
	}
	for(int i = 0; i < n; i++) cout << nums[i] << " " ;
	return 0;
}
