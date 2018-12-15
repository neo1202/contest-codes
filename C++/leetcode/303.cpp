#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
	vector<int> sum;
    NumArray(vector<int> nums) {
    	if (nums.size()==0){
    		return;
		}
    	sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
        	sum.push_back(sum[i-1]+nums[i]);
		}
    }
    
    int sumRange(int i, int j) {
    	if(i==0){
    		return sum[j];
		}
        return sum[j]-sum[i-1]; 
    }
};

int main()
{
	vector<int> v;
	v.push_back(-2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(-5);
	v.push_back(2);
	v.push_back(-1);
	
	NumArray *na = new NumArray(v);
	cout << na->sumRange(0,2) << endl;
	cout << na->sumRange(2,5) << endl;
	cout << na->sumRange(0,5) << endl;
	return 0;
}
