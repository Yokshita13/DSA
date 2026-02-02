#include <iostream>
using namespace std;

int decTobinary(int decNum){
    int answer=0, power=1;
    while(decNum >0){
        int rem = decNum%2;
        decNum/=2;
        answer += (rem * power);
        power*=10;
    }
    return answer;
}

int main() {
    int num = 5;
    cout<<decTobinary(num);
    // for(int i=1; i<=10; i++){
    //     cout<<decTobinary(i)<<endl;
    // }
    return 0;
}
