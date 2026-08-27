class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> s1;
        for (int i = 0; i<s.size();i++){
            s1[s[i]]++;
             }
        for (int i = 0 ; i< s.size();  i++){
            if( s1 [s[i]]==1){
                return i;
            }
        }
       

        return -1;
    }
};