class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<float> st;

        for(string s : tokens){
            if(s == "+"){
                float b = st.top();
                st.pop();
                float a = st.top();
                st.pop();
                st.push(a+b);
            }else if(s == "-"){
                float b = st.top();
                st.pop();
                float a = st.top();
                st.pop();
                st.push(a-b);
            }else if(s == "*"){
                float b = st.top();
                st.pop();
                float a = st.top();
                st.pop();
                st.push(a*b);
            }else if(s == "/"){
                float b = st.top();
                st.pop();
                float a = st.top();
                st.pop();
                int out = a/b;
                st.push(out);
            }else{
                float num = std::stoi(s);
                st.push(num);
            }
        }
        
        return st.top();
    }
};
