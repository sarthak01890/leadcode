class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sarthak;
        unordered_map<char,int> sarthak2;
        
        for (int i =0;i<s.size(); i++){
            sarthak [s[i]]++;
        }
         for (int j =0;j<t.size(); j++){
            sarthak2 [t[j]]++;
        }
        if ( sarthak == sarthak2){
            return true;

        }
        return false;
        

        
    }
};