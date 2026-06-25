class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int k=target-nums[i];
            if(mp.find(k)==mp.end()){
                mp[nums[i]]=i;
            }else{
                v.push_back(mp[k]);
                v.push_back(i);
            }
        }
        return v;
    }
};