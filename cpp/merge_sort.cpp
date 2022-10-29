//code for merge sort in c++

#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
  
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r)
    {
        //Same as (l+r)/2, but avoids overflow for large l and h
        int mid = l + (r - l) / 2; 
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() 
{
    int arr[10];
    for (int i = 0; i < 10; ++i) {
       cin>> arr[i];
    }
    mergeSort(arr,0,9);
    for (int j = 0; j < 10; ++j) {
        cout << arr[j] << " ";
    }
    return 0;
}
