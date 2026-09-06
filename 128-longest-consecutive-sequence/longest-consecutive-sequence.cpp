class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //  int n= nums.size();
    //  if(n==0) 
    //  return 0;
    //  sort(nums.begin(),nums.end()); 
    //  int curr =1;
    //  int glo =1; 
    //  for(int i = 0 ;  i < n ;i++  ){
    //     if(nums[i]== nums[i-1]){
    //         continue ;

    //     }
    //     else if(nums[i]-1==nums[i-1]){
    //         curr++;

    //     }
    //     else {
    //         glo =max(glo,curr);
    //         curr=1;
    //     }


    //  }
    //      glo =max(glo,curr);
    //      return glo;
     int n= nums.size();
     if(n==0) 
     return 0;
     unordered_set <int> bosdu;
     for(int x: nums)  bosdu.insert(x);

     int glolen=0;
     for (int x: bosdu) {
        if (!bosdu.count(x-1)){
            int curr =1;
            int currn=x;
            while (bosdu.count (currn +1)){
                curr ++;
                currn ++;
            }
            glolen = max(curr,glolen);
        }
     }
     return glolen;


     

     
    }
    
};