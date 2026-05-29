#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 30;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element Found at Index " << i;
            return 0;
        }
    }

    cout << "Element Not Found";

    return 0;
}