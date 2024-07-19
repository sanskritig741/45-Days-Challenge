class MyQueue {
public:
    stack<int>s;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) {
       if(s.size()==0){
        s.push(x);
        return;
       }
       else{
       while(s.size()>0){
        helper.push(s.top());
        s.pop();
       }
       s.push(x);
       while(helper.size()>0){
        s.push(helper.top());
        helper.pop();
       }
       }
        
    }
    
    int pop() {
        // while(s.size()>0){
        //     helper.push(s.top());
        //     s.pop();
        // }
        // int x=helper.top();
        // helper.pop();
        // while(helper.size()>0){
        //     s.push(helper.top());
        //     helper.pop();
        // }
        // return x;
        int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        //  while(s.size()>0){
        //     helper.push(s.top());
        //     s.pop();
        // }
        // int x=helper.top();
     
        // while(helper.size()>0){
        //     s.push(helper.top());
        //     helper.pop();
        // }
        // return x;
        return s.top();
    }
    
    bool empty() {
        if(s.size()==0) return true;
        else return false;
    }
};

