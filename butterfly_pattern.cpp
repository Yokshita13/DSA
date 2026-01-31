#include <iostream>
using namespace std;
int main() {
    int n=4;

    //Upper half
    for(int i=0; i<n; i++){
        //loop1
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //loop2
        for(int j=i+1; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    //Lower half
    for(int i=0; i<n; i++){
        //loop3
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //spaces
        for(int j=1; j<2*i+1; j++){
            cout<<" ";
        }
        //loop4
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
