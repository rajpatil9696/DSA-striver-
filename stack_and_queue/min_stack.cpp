// implement a stack which gives the getmin function 
/*
class MinStack {
    stack<pair<int,int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int mini;
        if(st.empty()){
            mini=val;
        }
        else{
            mini=min(st.top().second,val);
        }
        st.push({val,mini});
    }
    
    void pop() {
       st.pop(); 
    }
    
    int top() {
     return  st.top().first;  
    }
    
    int getMin() {
        return st.top().second ;
    }
};
*/