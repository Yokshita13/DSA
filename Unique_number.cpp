#include <iostream>
using namespace std;
int unique(int arr[], int size){
    int duplicate = 0;
    for(int i=0; i<size; i++){
        duplicate = duplicate ^ arr[i];
    }
    return duplicate;
}
int main() {
    int arr[] = {4,1,2,1,2};
    int size  = 5;
    cout << "Unique element is: " << unique(arr, size);
    return 0;
}
