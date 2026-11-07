class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for(char c : s){
            if (c == '('){
                st.push(')');
            }else if(c == '['){
                st.push(']');
            }else if(c == '{'){
                st.push('}');
            }else{
                if ((!st.empty())&&(st.top() == c)){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        if (st.empty()){
            return true;
        }else{
            return false;
        }
    }
};
