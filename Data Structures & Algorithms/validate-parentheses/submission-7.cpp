class Solution {
public:
    bool isValid(string s) {
        std::unordered_set<char> open = {'[', '{', '('};
        std::unordered_set<char> close = {']', '}', ')'};
        std::unordered_map<char, char> complements = {{']','['}, {'}', '{'}, {')', '('}};
        std::stack<char> shelf;

        for (char c : s){
            if (open.find(c) != open.end()){
                shelf.push(c);
            }else{
                if (shelf.empty()){
                    return false;
                }else if (shelf.top() == complements[c]){
                    shelf.pop();
                    continue;
                }else{
                    return false;
                }
            }
        }
        if (shelf.empty()){
            return true;
        } else {
            return false;
        }
    }
};
