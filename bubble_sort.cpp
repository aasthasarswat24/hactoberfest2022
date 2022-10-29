//code for bubble sort in c++

#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int e) {
    int temp;
    int i, j;

    for (i = 1; i < e; i++) {
        for (j = 0; j < e - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin>>arr[i];
    }
    bubbleSort(sirala,10);
    for (int j = 0; j < 10; ++j) {
        cout << sirala[j] << " ";
    }
    return 0;
}
