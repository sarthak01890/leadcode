class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int n = arr.size();

        int noDelete = arr[0];      // Max sum without deletion
        int oneDelete = 0;          // Max sum with one deletion
        int ans = arr[0];

        for (int i = 1; i < n; i++) {

            oneDelete = max(oneDelete + arr[i], noDelete);

            noDelete = max(arr[i], noDelete + arr[i]);

            ans = max(ans, max(noDelete, oneDelete));
        }

        return ans;
    }
};