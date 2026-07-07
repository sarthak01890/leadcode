class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int total = 0;

        int curMax = 0;
        int maxSum = INT_MIN;

        int curMin = 0;
        int minSum = INT_MAX;

        for (int x : nums) {

            // Maximum Subarray (Kadane)
            curMax = max(x, curMax + x);
            maxSum = max(maxSum, curMax);

            // Minimum Subarray
            curMin = min(x, curMin + x);
            minSum = min(minSum, curMin);

            total += x;
        }

        // Sab negative hain
        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};