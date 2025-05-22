stack<T> s;                   // Create a stack of type T
s.push(val);                  // Add element on top
s.pop();                      // Remove top element
s.top();                      // Access top element
s.empty();                    // Check if stack is empty
s.size();                     // Get size of the stack

queue<T> q;                   // Create a queue of type T
q.push(val);                  // Add element at the back
q.pop();                      // Remove element from the front
q.front();                    // Access front element
q.back();                     // Access last (back) element
q.empty();                    // Check if queue is empty
q.size();                     // Get size of the queue



// Reverse with vector
void reverseVector(std::vector<int>& v) {
    std::reverse(v.begin(), v.end());
}

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert at end
    dq.push_back(10); // Inserts 10 at the back

    // Insert at front
    dq.push_front(20); // Inserts 20 at the front

    // Remove from end
    dq.pop_back(); // Removes element from the back

    // Remove from front
    dq.pop_front(); // Removes element from the front

    // Insert more elements for demonstration
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    // Access front element
    int front = dq.front(); // Returns front element

    // Access back element
    int back = dq.back(); // Returns last element

    // Access by index
    int atIndex1 = dq[1];        // Access element at index 1
    int atIndex2 = dq.at(2);     // Also access element at index 2 (with bounds check)

    // Check if empty
    bool isEmpty = dq.empty(); // Returns true if deque is empty

    // Get size
    int size = dq.size(); // Returns the number of elements

    // Clear all elements
    dq.clear(); // Removes all elements

    // Output results (for illustration)
    cout << "Deque is empty? " << (isEmpty ? "Yes" : "No") << endl;
    cout << "Size: " << size << endl;
    cout << "Front: " << front << ", Back: " << back << ", Index 1: " << atIndex1 << ", Index 2: " << atIndex2 << endl;

    return 0;
}