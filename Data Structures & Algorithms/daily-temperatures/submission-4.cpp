class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> output(temperatures.size());
        std::stack<vector<int>> st;
        for (int i=0; i<temperatures.size(); ++i){
            if (st.empty()){
                st.push({temperatures[i], i});
            } else{
                while (temperatures[i] > st.top()[0]){
                    output[st.top()[1]] = i - st.top()[1];
                    st.pop();
                    if(st.empty()){
                        break;
                    }
                }
                st.push({temperatures[i], i});
            }
        }

        return output;
    }
};
