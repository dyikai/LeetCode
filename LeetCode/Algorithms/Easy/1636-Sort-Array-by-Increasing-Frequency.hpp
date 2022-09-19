class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<tuple<int, int>> tpl;
        
        for (int num: nums) {
            if (umap.find(num) != umap.end()) {
                umap[num] += 1;
            } else {
                umap[num] = 1;
            }
        }
        
        for (auto& [key, value]: umap) {
            tpl.emplace_back(make_tuple(key, value));
        }
        
        sort(tpl.begin(), tpl.end(), compare);
        
        vector<int> ret;
        for (tuple<int, int> tmp: tpl) {
            for (int i = 0; i < get<1>(tmp); ++i) {
                ret.emplace_back(get<0>(tmp));
            }
        }
        
        return ret;
    }
    
    static bool compare(tuple<int, int> t1, tuple<int, int> t2) {
        if (get<1>(t1) == get<1>(t2)) {
            return get<0>(t1) > get<0>(t2);
        }
        
        return get<1>(t1) < get<1>(t2);
    }
};
