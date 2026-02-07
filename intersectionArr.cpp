#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {4,2,7,8,1,21,5};
    int arr2[] = {2,7,8,10,3,51,44};
    int size = 7;

    intersection(arr1, arr2, size);
    return 0;
}
