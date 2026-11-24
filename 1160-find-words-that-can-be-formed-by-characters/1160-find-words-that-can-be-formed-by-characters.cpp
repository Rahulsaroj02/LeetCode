class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for(auto ch:chars){
            mp[ch]++;
        }
        int c=0;
        for(auto v:words){
            unordered_map<char,int>mp1(mp);
            int cc=0;
            for(auto ch:v){
                if(mp1[ch]==0){
                    cc=0;
                    break;
                }
                mp1[ch]--;
                cout<<ch<<" "<<mp1[ch]<<" "<<mp[ch]<<endl;
                cc++;
            }
            // if(cc!=0){
            //     cout<<v<<" ";
            // }
            c=c+cc;
        }
        return c;
    }
};