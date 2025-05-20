#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Heapify up to maintain max-heap property after insertion
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;

            // Swap if parent is smaller than the current node
            if (heap[parent] < heap[index]) {
                swap(heap[parent], heap[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Heapify down to maintain max-heap property after deletion
    void heapifyDown(int index) {
        int size = heap.size();
        while (index < size) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            // Find the largest among index, left child and right child
            if (left < size && heap[left] > heap[largest])
                largest = left;

            if (right < size && heap[right] > heap[largest])
                largest = right;

            // If current node is not the largest, swap and continue heapifying
            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    // Insert an element into the Max Heap
    void insert(int val) {
        cout << "Inserting " << val << " into heap.\n";
        heap.push_back(val);             // Step 1: Add to the end
        heapifyUp(heap.size() - 1);      // Step 2: Restore heap property
    }

    // Delete the maximum element (root of the heap)
    void deleteMax() {
        if (heap.empty()) {
            cout << "Heap is empty, nothing to delete.\n";
            return;
        }

        cout << "Deleting max element: " << heap[0] << "\n";
        heap[0] = heap.back();           // Step 1: Replace root with last element
        heap.pop_back();                 // Step 2: Remove last element
        heapifyDown(0);                  // Step 3: Restore heap property
    }

    // Print the heap
    void printHeap() {
        cout << "Current heap: ";
        for (int val : heap)
            cout << val << " ";
        cout << "\n";
    }
};

int main() {
    MaxHeap h;
    h.insert(10);
    h.insert(30);
    h.insert(20);
    h.insert(50);
    h.printHeap();

    h.deleteMax();
    h.printHeap();

    h.deleteMax();
    h.printHeap();

    return 0;
}

// Steps to run - complie and run
// g++ Heap.cpp -o heap
//./heap