#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 0) {
            return -1;
        }

        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); ++i) {
            if (umap.find(nums[i]) != umap.end()) {
                umap[nums[i]] += 1;
            } else {
                umap[nums[i]] = 1;
            }
        }

        for (auto &t: umap) {
            if (t.second > (nums.size() / 2)) {
                return t.first;
            }
        }

        return -1;
    }
};
