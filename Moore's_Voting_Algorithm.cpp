#include <iostream>
using namespace std;
int main() {
    int nums[] = {1,2,2,1,1};
    int n = 5;
    int freq = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
    return 0;
}
