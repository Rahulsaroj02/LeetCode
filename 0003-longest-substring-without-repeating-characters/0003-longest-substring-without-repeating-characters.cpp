class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int ans = 0, curr = 0,rs=-1;
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 0) {
                curr++;
            } else {
                if (mp[s[i]] < rs) {
                    curr++;
                } else {
                    ans = max(curr, ans);
                    cout << ans << endl;
                    curr = i + 1 - mp[s[i]];
                    rs = mp[s[i]];
                }
            }
            mp[s[i]] = i + 1;
        }
        return max(ans, curr);
    }
};