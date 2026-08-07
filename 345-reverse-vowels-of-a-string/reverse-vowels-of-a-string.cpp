class Solution {
public:
bool isVowel(char ch) {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
}



    string reverseVowels(string s) {
        vector <char> vowels;// vowels=[]

        // collect the vowels

        for (char ch : s){
            if( isVowel(ch))
            vowels.push_back (ch);
        }
        //reverse
        reverse(vowels.begin(), vowels.end());


        // rakh do
        int j=0;
        for (int i= 0; i<s.size ();i++){
            if(isVowel(s[i])){
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
    }
};