class MyCircularQueue {
public:
    int idx;
    vector<int> v;
    int maxSize;
    MyCircularQueue(int k) {
        v.resize(k);
        idx = 0;
        maxSize = k;
    }
    
    bool enQueue(int value) {
        if(idx>=maxSize){
            return false;
        }
        v[idx] = value;
        idx++;
        return true;
    }
    
    bool deQueue() {
        if(idx<=0){
            return false;
        }
        for(int i = 1;i<idx; i++){
            v[i-1] = v[i];
        }
        idx--;
        return true;
    }
    
    int Front() {
        if(idx==0){
            return -1;
        }
        return v[0];
    }
    
    int Rear() {
        // Agar index ki value 0 hai iska mtlb us jagah pe abhi value insert karna hoga 
        if(idx==0){
            return -1;
        }
        return v[idx-1];
    }
    
    bool isEmpty() {
        return idx==0;
    }
    
    bool isFull() {
        return maxSize==idx;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */