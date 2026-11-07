class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<vector<int>> ps;
        int n = position.size();
        std::vector<float> ts;
        ts.reserve(n);
        ps.reserve(n);
        for (int i=0; i<n; ++i){
            ps.push_back({position[i], speed[i]});
        }
        std::sort(ps.begin(), ps.end(), [](const auto& a, const auto& b){
            return a[0]<b[0];
        });

        for (vector<int> v : ps){
            ts.push_back(((target-v[0])*1.0f)/v[1]); // can also use static cast thing. look it up.
        }

        for (int i=n-1; i>0; --i){
            if(ts[i-1]<ts[i]){
                ts[i-1]=ts[i];
            }
        }

        std::set<float> finals;

        for (float i : ts){
            finals.insert(i);
        }

        return finals.size();
    }
};
