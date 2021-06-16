class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1 = nums2;
            return;
        } else if (n == 0) {
            return;
        }

        for (vector<int>::size_type i = nums1.size(); i != m; --i) {
            nums1.erase(nums1.begin() + i - 1);
        }
        
        for (vector<int>::size_type j = nums2.size(); j != n; --j) {
            nums2.erase(nums2.begin() + j - 1);
        }
        
        vector<int>::iterator begin = nums1.begin();
        int size = m;
        
        while (begin != nums1.end()) {
            for (vector<int>::iterator j = nums2.begin(); j != nums2.end();) {
                if (*j < *begin) {
                    nums1.insert(begin, *j);
                    nums2.erase(j);
                    ++size;
                } else {
                    ++j;
                }
            }
            
            ++begin;
        }
        
        if (nums2.size() > 0) {
            for(int k: nums2) {
                nums1.push_back(k);
            }
        }
    }
};
