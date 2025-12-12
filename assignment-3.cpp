#include <iostream>
using namespace std;

int main() {
    int outLoop;
    cin >> outLoop;

    int fibArray[outLoop];
    for (int i = 0; i < outLoop; i++) {
        cin >> fibArray[i];
    }

    for (int i = 0; i < outLoop; i++) {

        fibArray[i];

        
        unsigned long long a = 0, b = 1, c;

        if (fibArray[i] == 0) {
            cout << "Fib(0) = 0" << endl;
            continue;
        }
        if (fibArray[i] == 1) {
            cout << "Fib(1) = 1" << endl;
            continue;
        }

        for (int x = 2; x <= fibArray[i]; x++) {
            c = a + b;
            a = b;
            b = c;
        }

        cout << "Fib(" << fibArray[i] << ") = " << b << endl;
    }

    return 0;
}
