class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;
        for(char ch:s){
            if(st.find(ch)==st.end()){
                st.insert(ch);
            }else{
                return ch;
            }
        }
        return '1';
    }
};