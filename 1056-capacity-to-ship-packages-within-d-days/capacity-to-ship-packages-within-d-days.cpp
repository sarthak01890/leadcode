class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int left = 0;
        int right = 0;

        // Minimum capacity = maximum weight
        // Maximum capacity = total weight
        for (int weight : weights) {
            left = max(left, weight);
            right += weight;
        }

        while (left <= right) {

            int mid = left + (right - left) / 2;

            int requiredDays = 1;
            int currentWeight = 0;

            // Check how many days are needed
            // with capacity = mid
            for (int weight : weights) {

                if (currentWeight + weight > mid) {
                    requiredDays++;
                    currentWeight = 0;
                }

                currentWeight += weight;
            }

            // Capacity mid is enough
            if (requiredDays <= days) {
                right = mid - 1;
            }

            // Capacity mid is too small
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};