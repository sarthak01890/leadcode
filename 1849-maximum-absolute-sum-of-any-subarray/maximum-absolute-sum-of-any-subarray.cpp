class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int maxEnding = 0;
        int minEnding = 0;

        int maxSum = 0;
        int minSum = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Maximum Subarray Sum (Kadane)
            maxEnding = max(nums[i], maxEnding + nums[i]);
            maxSum = max(maxSum, maxEnding);

            // Minimum Subarray Sum (Reverse Kadane)
            minEnding = min(nums[i], minEnding + nums[i]);
            minSum = min(minSum, minEnding);
        }

        return max(abs(maxSum), abs(minSum));
    }
};