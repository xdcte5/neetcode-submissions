class MinStack {
    std::stack<int> main;
    std::stack<int> mins;
    int min;
public:
    MinStack() {}
    
    void push(int val) {
        if (main.empty()){
            min=val;
        }
        main.push(val);
        if (val<min){
            min=val;
        }
        mins.push(min);
    }
    
    void pop() {
        main.pop();
        mins.pop();
        if(!mins.empty()){
            min=mins.top();
        }
        
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return min;
    }
};
