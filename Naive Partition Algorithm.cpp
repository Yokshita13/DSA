// C++ program to partition the array
// using naive partition approach
#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array according 
// to pivot index element
void partition(vector<int> &arr) {
  	int n = arr.size();
  
  	// Last element will be the pivot value
  	int pivot = arr[n - 1];
  
  	// create a temp array to store the elements in order
  	vector<int> temp(n);
  	int idx = 0;
  	
  	// First fill element smaller than or equal to
  	// pivot, into the temp array
  	for (int i = 0; i < n; i++) {
      	if (arr[i] <= pivot) 
          	temp[idx++] = arr[i];
    }
  	
  	// Now fill the elements greater than pivot
  	for (int i = 0; i < n; i++) {
      	if (arr[i] > pivot) 
          	temp [idx++] = arr[i];
    }
  	
  	// copy the elements from temp to arr
  	arr = temp;
}
int main() {
    vector<int> arr = {5, 13, 6, 9, 12, 11, 8};
  	partition(arr);
  	
  	for (int i = 0; i < arr.size(); i++) 
      	cout << arr[i] << " "; 
    return 0;
}
