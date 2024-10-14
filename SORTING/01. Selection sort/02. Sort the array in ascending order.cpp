#include <iostream>
#include <vector>
using namespace std;

vector<int> ascending(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int main() {
    // Sort the array in ascending order
    vector<int> arr = {7, 6, 3, 8, 9, 10, 25, 4};
    
    // Correct usage of size()
    int size = arr.size();  // You need to use arr.size() with parentheses
    
    ascending(arr, size); // Sort the array
    
    // Print the sorted array
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}
