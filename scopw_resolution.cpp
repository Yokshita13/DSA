#include <iostream>
using namespace std;
int x = 11;
int main() {
    int x=10;
    cout<<"Local variable x: "<<x<<endl;
    cout<<"Global variable x: "<<::x<<endl;
    return 0;
}
