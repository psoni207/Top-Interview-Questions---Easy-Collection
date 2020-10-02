class MinStack {
    private:
        stack<int> nums, aux;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        nums.push(x);
        if(aux.empty() || aux.top() >= x){
            aux.push(x);
        }
    }
    
    void pop() {
        if(nums.empty() ) return;
        if(nums.top() == aux.top()){
            nums.pop();
            aux.pop();
        }else{
            nums.pop();
        }
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return aux.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */