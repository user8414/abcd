#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && st.top() <= arr[i])
            st.pop();

        if(st.empty())
            cout << -1 << " ";
        else
            cout << st.top() << " ";

        st.push(arr[i]);
    }

    return 0;
}