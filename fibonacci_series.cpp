#include <iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1;

    for(int i = 1; i <= n; i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int num = 5;
    fibonacci(num);
    return 0;
}
