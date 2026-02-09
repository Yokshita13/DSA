#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec1 = {1,2,3};
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    
    vector<char> vec2 = {'a','b','c','d','e'};
    for(char val: vec2){ //for-each loop
        cout<<val<<endl;
    }

    return 0;
}
