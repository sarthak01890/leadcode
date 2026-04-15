class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg, pos;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        // square
        for(int &x : neg) x = x * x;
        for(int &x : pos) x = x * x;

        // reverse neg
        reverse(neg.begin(), neg.end());

        // merge
        vector<int> res;
        int i = 0, j = 0;

        while(i < neg.size() && j < pos.size()){
            if(neg[i] < pos[j]) res.push_back(neg[i++]);
            else res.push_back(pos[j++]);
        }

        while(i < neg.size()) res.push_back(neg[i++]);
        while(j < pos.size()) res.push_back(pos[j++]);

        return res;
    }
};