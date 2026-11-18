class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char ch:target){
            mp1[ch]++;
        }
        for(char ch:s){
            if(target.find(ch)!=string::npos){
                mp2[ch]++;
            }
        }
        int m=INT_MAX;
        for(char ch:target){
            int n=mp2[ch]/mp1[ch];
            m=min(m,n);
        }
        return m;
    }
};