#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted at index 'i' in a vector of size 'n'
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;          // Initialize largest as root
    int left = 2 * i + 1;     // Left child
    int right = 2 * i + 2;    // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the affected subtree
    }
}

// Main function to perform heap sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Build max heap (heapify entire array from bottom up)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Extract elements from heap one by one
    for (int i = n - 1; i >= 0; i--) {
        // Move current root (max) to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {10, 50, 30, 20, 5, 80};

    cout << "Original array:\n";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    heapSort(arr);

    cout << "Sorted array (ascending):\n";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}