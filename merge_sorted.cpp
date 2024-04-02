#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> nums1(n);
	vector<int> nums2(m);
	for(int i = 0; i < n; i++) cin >> nums1[i];
	for(int i = 0; i < m; i++) cin >> nums2[i];
	 
	vector<int> nums3;
	for(int i = 0, j = 0; i < n || j < m;){
		if(i == n){
			nums3.push_back(nums2[j]);
			j++;
			continue;
		}
		if(j == m){
			nums3.push_back(nums1[i]);
			i++;
			continue;
		}
		if(nums1[i] > nums2[j]){
			nums3.push_back(nums2[j]);
			j++;
		}
		else{
			nums3.push_back(nums1[i]);
			i++;
		}
	}
	for(int i = 0; i < n + m; i++) cout << nums3[i] << " ";
	
	return 0;
}
