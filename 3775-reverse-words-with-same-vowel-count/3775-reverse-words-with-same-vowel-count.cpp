class Solution {
public:
    int vowelCount(string s){
        int count=0;
        for(char ch:s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                count++;
            }
        }
        return count;
    }

    string rev(string s){
        reverse(s.begin(), s.end());
        return s;
    }
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        string ans="";
        ans+=words[0]+" ";
        int count=vowelCount(words[0]);
        bool first = true;
        for(string str:words){
            if (first) {
                first = false;
                continue;
            }
            if(count==vowelCount(str)){
                ans+=rev(str)+" ";
            }else{
                ans+=str+" ";
            }
        }
        if (!ans.empty())
            ans.pop_back();
        return ans;
    }
};