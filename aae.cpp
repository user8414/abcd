#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Average = " << avg;

    return 0;
}


in C 

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int sum=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    float avg=(float)sum/n;

    printf("%.2f",avg);

    return 0;
}