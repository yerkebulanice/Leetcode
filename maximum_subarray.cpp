#include <iostream>
#include <vector>
using namespace std;

int max(int num1, int num2) {
	if(num1 > num2) {
		return num1;
	} else {
		return num2;
	}
}

int maximum_subarray(vector<int>& nums) {
	int result = nums[0];
	int count = 0;
	
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << "\n";
		if(count < 0){
			count = 0;
		} 
		count+=nums[i];
		result = max(count, result);
	}
	return result;
}

int main() {
	vector<int> nums = {1,2,3,4,5};
	cout << maximum_subarray(nums);
}

