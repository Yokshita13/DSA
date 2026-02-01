#include <iostream>
using namespace std;
int sumDigit(int n){
    int sum = 0;
    while(n!=0){
        int lastDigit = n%10;
        n = n/10;
        sum+=lastDigit;
    }
    return sum;
}
int main(){
    int num = 2356;
    cout<<"The sum of digits are: "<<sumDigit(num)<<endl;
    return 0;
}
