class OrderedStream {
private:
    int pos, size;
    vector<string> vec;
    
public:
    OrderedStream(int n): pos(1), size(n + 1) {
        vec.assign(n + 1, "");
    }
    
    vector<string> insert(int idKey, string value) {
        vec[idKey] = value;
        vector<string> ret;
        
        while (pos < size && vec[pos] != "") {
            ret.push_back(vec[pos]);
            ++pos;
        }
        
        return ret;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
