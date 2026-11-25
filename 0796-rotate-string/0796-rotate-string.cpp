class Solution {
public:
    bool rotateString(string s1, string goal) {
        string s;
        for (int i = 0; i < s1.size(); i++) {
            s=s1;
            reverse(s.begin(), s.begin() + i);
            reverse(s.begin() + i, s.end());
            reverse(s.begin(), s.end());
            cout<<s<<" ";
            if(s==goal){
                cout<<s;
                return true;
            }
        }
        return false;
    }
};