#include <iostream>
using namespace std;

void checkPrime(int num) {
    int count = 0;

    if (num <= 1) {
        cout << "Not a Prime Number";
        return;
    }

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
}

int main() {
    int number = 7;
    checkPrime(number);
    return 0;
}
