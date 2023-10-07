class MinStack {
public:
    stack< long long > st;
    long long  mini = INT_MAX;

    MinStack() {
        

         
    }
    
    void push(int val) {
        
        long long vall = val;
        if(st.empty())
        {
            mini = vall;
            st.push(vall);
        }
        else
        {
            if(vall<mini)
            {
                
                st.push(2*vall - mini);
                mini = vall;
            }
            else
            {
                st.push(vall);
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;

        long long ele = st.top();
        st.pop();           // this will just pop the element 

        if(ele<mini)
        {
            mini = 2*mini-ele;      // if the element is poopped out so we tske the mini to previous level.
        }
        
    }
    
    int top() {
        
        if(st.empty()) return -1;

        long long ele = st.top();
        if(ele<mini) return mini;  // if the value is modified, the mini value will return.
        return ele;   // if the modified value is not return then the element will return.
    }
    
    int getMin() {
        
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
