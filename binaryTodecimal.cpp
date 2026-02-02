#include <iostream>
using namespace std;

int binaryTodec(int binNum){
    int answer=0, power=1;
    while(binNum >0){
        int rem = binNum%10;
        answer += (rem * power);
        binNum/=10;
        power*=2;
    }
    return answer;
}

int main() {
    int num = 101;
    cout<<binaryTodec(num);
    return 0;
}
