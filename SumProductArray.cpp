#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int sum = 0;
    int product = 1;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array: "<<sum<<endl;
    
    for(int i=0; i<size; i++){
        product*=arr[i];
    }
    cout<<"Product of array: "<<product<<endl;
    return 0;
}
