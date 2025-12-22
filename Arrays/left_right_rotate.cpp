#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>a;
        for(int i=0;i<k;i++){
            a.push_back(nums[n-k+i]);
        }nums.erase(nums.begin()+n-k,nums.end());
        a.insert(a.end(),nums.begin(),nums.end());
        nums=a;  
    };

    int main(){
        vector<int>nums={-1,-100,3,99};
        int k=2;
        rotate(nums,k);
        for(int x:nums){
            cout<<x<<endl;
        }return 0;
    }