#include <iostream>
using namespace std;

int main() {
    int n = 5;
    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;

    return 0;
}