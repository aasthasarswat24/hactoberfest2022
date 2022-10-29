//code for selection sort in c++

#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int e) {
    int i, j, k, temp;
    for (i = 0; i < e - 1; i++) {
        k = i;
        for (j = i + 1; j < e; j++) {
            if (arr[j] < arr[k])
                k = j;
        }
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}

int main() {
   
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin>>arr[i];
    }
    selectionSort(arr,10);
    for (int j = 0; j < 10; ++j) {
        cout << arr[j] << " ";
    }
    return 0;
}
