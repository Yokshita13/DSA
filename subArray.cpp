#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
    for(int start=0; start<n; start++){ //Start index
        for(int end=start; end<n; end++){ //End index
            for(int i=start; i<end; i++){ //Print elements between start and end
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
