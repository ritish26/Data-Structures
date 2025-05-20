![alt text](image.png)

priority_queue<int> pq //bydefault it is max heap
priority_queue<int, vector<int>, greater<int>> minHeap; // it gives min heap
priority_queue<pair<int,pair<int,int>>> maxHeap // to store in pairs


This comparator is used in a priority_queue (which is a heap in C++). By default, priority_queue in C++ is a max-heap — meaning it gives you the largest element first.
It overrides the () operator to define how two ListNode* pointers should be compared.
This means:
	•	If a->val is greater than b->val, it returns true
	•	And in a priority_queue, returning true means a goes after b in the heap

So this forces the heap to prioritize smaller values first — making it behave like a min-heap.
struct compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;  // smallest value has higher priority
    }
};


