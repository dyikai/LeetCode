class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int length = arr.size();
        int left = 0;
        int right = length - k;

        while (left < right)
        {
            int mid = (right + left) >> 1;
            if (x - arr[mid] > arr[mid + k] - x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        vector<int> result;
        for (int i = left; i < left + k; ++i)
        {
            result.push_back(arr[i]);
        }

        return result;
    }
};