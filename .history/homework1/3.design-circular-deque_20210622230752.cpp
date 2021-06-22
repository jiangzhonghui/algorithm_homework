class MyCircularDeque {
public:
    int* nums;
    int head;
    int tail;
    int index;
    int maxSize;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        maxSize = k;
        nums = new int[k];
        for(int i=0;i<k;i++){
            nums[i] = 0;
        }
        index = 0;
        head = 0;
        tail = 0;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(index==maxSize){
           return false;
        }
         head = (head-1+maxSize) % maxSize;
         nums[head] = value;
         index++;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(index==maxSize){
            return false;
        }
         tail = (head+ index) % maxSize;
         nums[tail] = value;
         index++;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(index==0) return false;
        head = (head+1)%maxSize;
        index--;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(index==0) return false;
        index--;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(index==0) return -1;
        return nums[head];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
         if(index==0) return -1;
        tail = (head + index - 1)%maxSize;
        return nums[tail];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return index==0;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return index==maxSize;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */