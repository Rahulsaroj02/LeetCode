class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int m = 0;

        for (int n : nums) {
            mp[n]++;
            m = max(m, mp[n]);
        }
        int i = 0;
        unordered_set<int> v;
        for (pair<int, int> p : mp) {
            if (p.second == m) {
                // cout<<p.first;
                v.insert(p.first);
            }
        }
        int ans=INT_MAX;
        for(int n:v){
            int f=-1,q = 0;
            for(int i=0;i<nums.size();i++){
                if(n==nums[i]){
                    if(f==-1){
                        f=i;
                    }
                    q=max(q,i-f);
                }
            }
            ans=min(ans,q);
        }
        return ans+1;
    }
};