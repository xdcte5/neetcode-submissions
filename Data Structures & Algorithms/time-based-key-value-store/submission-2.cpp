class TimeMap {
    std::unordered_map<string, std::map<int, string>> ne;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        ne[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if (ne[key].find(timestamp) != ne[key].end()){
            return ne[key][timestamp];
        }else{
            if (ne[key].lower_bound(timestamp) != ne[key].begin()){
                return prev(ne[key].lower_bound(timestamp))->second;
            }else{
                return "";
            }
            
        }
    }
};
