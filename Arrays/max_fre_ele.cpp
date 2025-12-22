#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int maxFrequencyElements(vector<int>& nums) {
       int hash[1000]={0};
       int c=0;
       for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
       }int maxFreq=*max_element(hash,hash+1000);
        for(int i=0;i<1000;i++){
        if(hash[i]==maxFreq){
            c+=hash[i];
        }
       }return c;
    }

    int main(){
         vector<int> nums = {1, 2, 2, 3, 1, 4};
         int res=maxFrequencyElements(nums);
         cout<<res<<endl;
         return 0;
    }