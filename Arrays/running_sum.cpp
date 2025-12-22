#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }return nums;
    }

    int main(){
        vector<int>nums={1,2,3,4,5};
        runningSum(nums);
        for(int x:nums){
            cout<<x<<endl;
        }
    }