#include <iostream>
#include <vector>
#include "algorithms.h"
using namespace std;

int main() {
    vector<int> arr = {8, 3, 5, 1, 9};

    cout << "Original: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    cout << "Search 5 using linearSearch: " << linearSearch(arr, 5) << endl;

    return 0;
}
