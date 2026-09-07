class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;

        // int i =0;
        // for(int j=1 ; j<nums.size(); j++){
        //    if( nums[i]!=nums[j] )
        //    i++;
        //    nums[i]=nums[j];

        // }
        // return i+1;

        int insertindex=1;

        for(int i =1 ; i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[insertindex]=nums[i];
                insertindex++;
            }
        }

        return insertindex;
    }
};