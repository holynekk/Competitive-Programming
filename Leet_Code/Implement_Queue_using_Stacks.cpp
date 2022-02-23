class MyQueue {

private:
    stack<int> my_queue;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        pushHelper(x);
    }
    
    void pushHelper(int x){
        if(my_queue.size()==0){
            my_queue.push(x);
            return;
        }
        int data;
        data = my_queue.top();
        my_queue.pop();
        pushHelper(x);
        my_queue.push(data);
        return;
        
    }
    
    int pop() {
        int ans = my_queue.top();
        my_queue.pop();
        return ans;
    }
    
    int peek() {
        return my_queue.top();
    }
    
    bool empty() {
        return (!my_queue.size());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */