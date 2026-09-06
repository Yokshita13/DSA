#include <iostream>
#include <vector>
using namespace std;
int main() {
     int arr[5] = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter Target"<<endl;
    cin>> target;
    for(int i=0; i<=5; i++){
        if(arr[i] == target){
            cout<<i<<endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
