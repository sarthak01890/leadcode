class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*int count =0;
        for (int i = 0; i < nums.size(); i++ ){
            int sum = 0;
            for ( int j = i;j<nums.size(); j++){
                sum += nums[j];
                if ( sum == k)
                {
                     count++;
                
                }
                


            }
            
        }
        return count;
      */


     int sum = 0;
     int res =0;
     unordered_map <int,int> f;
     f[0]=1;
     for (int i =0; i<nums.size();i++){
        sum+=nums[i];
        int ques = (sum -k);
        int freq = f[ques];
        res+= freq;
        f[sum]++;
     }
     return res;
            
    }
};