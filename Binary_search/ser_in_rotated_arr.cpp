#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<cctype>
using namespace std;
int search(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }return -1;
    }
int main(){
    int nums[]={4,5,6,7,0,1,2};
    int target=0;
    int ans=search(nums,target);
    cout<<ans<<endl;
}