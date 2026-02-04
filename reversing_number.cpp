#include <iostream>
using namespace std;
int revNum(int num){
    int lastdigit; 
    int revNum=0; 
    while(num>0){
        int lastdigit =  num % 10;
        num = num/10; 
        revNum = (revNum*10) + lastdigit; 
    }
    return revNum;
} 
int main() {
    int num = 125;
    cout<< "Reversed Num : " << revNum(num) << endl; 
    return 0; 
}
