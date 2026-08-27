class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;
        for(int i=0; i<ransomNote.size();i++){
            s1[ransomNote[i]]++;
        }
         for(int i=0; i<magazine.size();i++){
            s2[magazine[i]]++;
         }
        for (auto x : s1) {
            if (s2[x.first] < x.second) {
                return false;
            }
            }
            return true;
    }
};