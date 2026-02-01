#include <iostream>
using namespace std;
int main(){
    int fact = 1;
    int n;
    cout<<"Enter value for n to calculate factorial: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<fact<<endl;
}
