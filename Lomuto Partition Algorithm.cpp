#include <iostream>
#include <vector>
using namespace std;

void partition(vector<int> &arr) {
  	int n = arr.size();
  	int pivot = arr[n - 1];
  	
  	// i acts as boundary between smaller and 
  	// larger element compared to pivot
  	int i = -1;
  	for (int j = 0; j < n; j++) {
      
      	// If smaller element is found expand the 
      	// boundary and swapping it with boundary element.
      	if (arr[j] < pivot) {
          	i++;
          	swap(arr[i], arr[j]);
        }
    }
  	
  	// place the pivot at its correct position
  	swap(arr[i + 1], arr[n - 1]);
}

int main() {
    vector<int> arr = {5, 13, 6, 9, 12, 11, 8};
  	partition(arr);
  	
  	for (int i = 0; i < arr.size(); i++) 
      	cout << arr[i] << " "; 
    return 0;
}
