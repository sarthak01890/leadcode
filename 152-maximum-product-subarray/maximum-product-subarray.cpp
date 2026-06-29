class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curmax= nums[0];
        int curmin=nums[0];
        int ans= nums[0];

        for (int i=1; i<nums.size();i++ ){
            int temp = curmax;
            curmax = max({nums[i],temp* nums[i],curmin * nums[i]});
            curmin = min({nums[i],temp* nums[i],curmin * nums[i]});

            ans= max(ans,curmax);

            
        }
        return ans;

        
    }
};