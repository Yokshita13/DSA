#include <iostream>
#include <climits>
using namespace std;
void element(int arr[], int size){
    int minIdx = 0;
    int maxIdx = 0;
    for(int i=0; i<size; i++){
        if(arr[i] < arr[minIdx]){
            minIdx = i;
        }
        if(arr[i] > arr[maxIdx]){
            maxIdx = i;
        }
    }
    //swapping
    int temp;
    temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    element(arr,size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
