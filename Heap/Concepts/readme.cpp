/*
 * Priority Queue (Heap) Behavior in C++
 *
 * By default, `priority_queue` in C++ is a **max-heap**, which means the element with the largest value 
 * has the highest priority and is popped first.
 *
 * Syntax:
 *     priority_queue<int> maxHeap; // Default max-heap
 *
 * To create a **min-heap**, use the `greater<int>` comparator:
 *     priority_queue<int, vector<int>, greater<int>> minHeap;
 *
 * You can also use `priority_queue` with pairs:
 *     priority_queue<pair<int, pair<int, int>>> maxHeapOfPairs;
 *
 * --------------------------
 * Custom Comparator Example
 * --------------------------
 * When working with complex data structures like linked lists (e.g., merging k sorted linked lists),
 * we often need a min-heap based on custom logic — such as comparing the values in ListNode objects.
 *
 * To achieve this, we define a custom comparator using a struct that overloads the `()` operator.
 * The comparator below creates a **min-heap** for `ListNode*`, prioritizing nodes with smaller values.
 */

struct compare {
    bool operator()(ListNode* a, ListNode* b) {
        // Return true if 'a' has a greater value than 'b'
        // This makes 'a' go below 'b' in the min-heap
        return a->val > b->val;
    }
};

/*
 * Why this works:
 * - The priority queue uses the comparator to determine ordering.
 * - If `a->val > b->val`, `a` is considered "larger" and goes after `b`.
 * - As a result, nodes with **smaller values** rise to the top — i.e., min-heap behavior.
 */
