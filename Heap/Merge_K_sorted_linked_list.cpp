class compare{
    public:
        int operator()(Node *a, Node *b){
            return b->data<a->data;
        }
}; 
Node * mergeKLists(Node *arr[], int n)
{
       // Your code here
       Node *head=NULL,*last=NULL;
       priority_queue<Node *,vector<Node*>, compare> pq;
       for(int i=0;i<n;i++)
       {
           if(arr[i]!=NULL)
           pq.push(arr[i]);
       }
       while(!pq.empty())
       {
           Node *top=pq.top();
           pq.pop();
           if(top->next!=NULL)
           pq.push(top->next);
           if(head==NULL)
           {
               head=top;
               last=top;
           }
           else
           {
               last->next=top;
               last=top;
           }
       }
       return head;
}
