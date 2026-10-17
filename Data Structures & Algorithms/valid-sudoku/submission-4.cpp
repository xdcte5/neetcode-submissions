class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> c1;
        vector<vector<int>> d= {{0,1,2},{3,4,5},{6,7,8}};

        for (vector<char> v : board){
            for (char c : v){
                c1[c]+=1;
            }
            for (auto const& [key, val] : c1){ //here we check if each row satisfies.
                if (key != '.'){
                    if (val==1){
                        continue;
                    }else{
                        return false;
                    }
                    
                }
            }
            c1={};
        }

        //time for condition 2

        for (int i=0; i<9; ++i){
            for (int j=0; j<9; ++j){
                c1[board[j][i]]+=1;
            }

            for (auto const& [key, val] : c1){ //here we check if each row satisfies.
                if (key != '.'){
                    if (val==1){
                        continue;
                    }else{
                        return false;
                    }
                    
                }
            }
            c1={};

        }

        //time for condition 3:

        for (vector<int> rsection : d){
            for (vector<int> csection : d){
                for (int i : rsection){
                    for (int j : csection){
                        c1[board[i][j]]+=1;
                    }
                }
                for (auto const& [key, val] : c1){
                    
                    if (key != '.'){
                        if (val==1){
                            continue;
                        }else{
                            return false;
                        }
                    }
                }
                c1={};
            }
        }

        

    return true;
        
    }
};
