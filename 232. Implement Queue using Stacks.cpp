class MyQueue {
public:
stack<int> input, output;

    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int po;
       if(!output.empty())
       {
           po = output.top();
       } 
       else
       {
           while(!input.empty())
                {
                    output.push(input.top());
                    input.pop();                 
                }
        po = output.top();

       }
       output.pop();
       return po;
    }
    
    int peek() 
    {
        int po;
        if(!output.empty())
       {
           return output.top();
       } 
       else
       {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
       }
        return output.top();
        
    }
    
    bool empty() {
        if(output.empty()&&input.empty())
        {
            return true;
        }
        else
            return false;
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
