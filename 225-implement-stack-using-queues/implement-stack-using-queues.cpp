class MyStack {
public:
    queue<int> q;
    int size;
    MyStack() {
        size = 0;
    }
    
    void push(int x) {
        q.push(x);
        size++;
    }
    
    int pop() {
        for(int i = 1; i<size; i++){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        size--;
        int ele = q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        for(int i = 1; i<size; i++){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        int ele = q.front();
        q.pop();
        q.push(ele);
        return ele;
    }
    
    bool empty() {
        return size==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */