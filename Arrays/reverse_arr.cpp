#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

void reverseArray(vector<int> &arr , int m) {
          	if(m+1<arr.size()){
            reverse(arr.begin()+m+1,arr.end());
              }        
};
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 3;

    reverseArray(arr, m);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}