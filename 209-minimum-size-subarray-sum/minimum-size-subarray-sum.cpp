class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0;
        int sum = 0;
        int n = nums.size();
        int res = INT_MAX;

        while (high < n) {
            // window expand
            sum += nums[high];

            // window shrink jab tak valid hai
            while (sum >= target) {
                int len=high - low + 1;
                res = min(res, len);
                sum -= nums[low];
                low++;
            }

            high++; 
        }

        return (res == INT_MAX) ? 0 : res;
    }
};