#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 67, 23, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minElement = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Minimum Element = " << minElement;

    return 0;
}