#include <bits/stdc++.h>
using namespace std;

int partitionfunc(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pindex = partitionfunc(arr, low, high); // Get pivot index
        quick_sort(arr, low, pindex - 1);          // Sort left part
        quick_sort(arr, pindex + 1, high);         // Sort right part
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1); // Pass n-1 as the last index

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
