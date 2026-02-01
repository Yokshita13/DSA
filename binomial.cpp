#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int bino(int n, int r){
    int N = factorial(n);
    int R = factorial(r);
    int NR = factorial(n - r);
    int nCr = N / (R * NR);  
    return nCr;

}
int main(){
    int n = 8, r = 2;
    cout<<bino(n,r)<<endl;
    return 0;
}
