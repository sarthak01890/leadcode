class Solution {
  List<int> twoSum(List<int> nums, int target) {
    int n = nums.length;
    Map<int, int> map={};
    for(int i= 0; i<n;i++){
        int partner=target - nums[i];
        if (map.containsKey(partner))
        return [map[partner]!,i];
        map[nums[i]]=i;
    }

    return [];
  }
}
