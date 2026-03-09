#include <iostream>
using namespace std;
int main() {
    int nums[] = {1,1,1,2,2};
    int n = 5;
    int freq = 1;
    int ans;
    ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            cout<<ans;
            return 0;
        }
    }
    cout << "No majority element";
    return 0;
}
