class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> bosd;
        unordered_set<int> papu;
        

        for (int x: nums1){
            bosd.insert(x);

        }
        for(int x: nums2){
            papu.insert(x);
        }
        if(bosd.size()>papu.size()){
            swap(bosd,papu);
        }
        vector<int> baigan;

        for(int x: bosd){
            if(papu.find(x)!=papu.end()){
                baigan.push_back(x);
            }

        }
        return baigan;


        
    }
};